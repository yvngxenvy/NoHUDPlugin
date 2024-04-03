#include "pch.h"
#include "NOHUDPlugin.h"
#include "RLSDK/SdkHeaders.hpp"
#include <Psapi.h>

namespace plugin {
	namespace instances {
        template<typename T> T* GetInstanceOf()
        {
            if (std::is_base_of<UObject, T>::value)
            {
                UClass* staticClass = T::StaticClass();

                if (staticClass && UObject::GObjObjects())
                {
                    int32_t numObjects = UObject::GObjObjects()->size();
                    for (int32_t i = numObjects - 1; i >= 0; i--)
                    {
                        if (i >= numObjects)
                            continue;

                        UObject* uObject = UObject::GObjObjects()->at(i);

                        if (uObject && uObject->IsA(staticClass))
                        {
                            if (uObject->GetFullName().find("Default__") == std::string::npos)
                            {
                                return static_cast<T*>(uObject);
                            }
                        }
                    }
                }
            }

            return nullptr;
        }
	}
    namespace memory {
        uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask)
        {
            MODULEINFO info = { };
            GetModuleInformation(GetCurrentProcess(), module, &info, sizeof(MODULEINFO));

            uintptr_t start = reinterpret_cast<uintptr_t>(module);
            size_t length = info.SizeOfImage;

            size_t pos = 0;
            size_t maskLength = std::strlen(mask) - 1;

            for (uintptr_t retAddress = start; retAddress < start + length; retAddress++)
            {
                if (*reinterpret_cast<unsigned char*>(retAddress) == pattern[pos] || mask[pos] == '?')
                {
                    if (pos == maskLength)
                    {
                        return (retAddress - maskLength);
                    }

                    pos++;
                }
                else
                {
                    retAddress -= pos;
                    pos = 0;
                }
            }

            return NULL;
        }
    }
    namespace globals {
        uintptr_t fnGObjects() {
            unsigned char GNamesPattern[] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x35\x25\x02\x00";
            char GNamesMask[] = "??????xx??xxxxxx";

            auto GNamesAddress = memory::FindPattern(GetModuleHandle(L"RocketLeague.exe"), GNamesPattern, GNamesMask);
            auto GObjectsAddress = GNamesAddress + 0x48;

            return GObjectsAddress;
        }
        uintptr_t fnGNames() {
            unsigned char GNamesPattern[] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x35\x25\x02\x00";
            char GNamesMask[] = "??????xx??xxxxxx";

            auto GNamesAddress = memory::FindPattern(GetModuleHandle(L"RocketLeague.exe"), GNamesPattern, GNamesMask);
            auto GObjectsAddress = GNamesAddress + 0x48;

            return GNamesAddress;
        }
        void Init() {
            GObjects = reinterpret_cast<TArray<UObject*>*>(fnGObjects());
            GNames = reinterpret_cast<TArray<FNameEntry*>*>(fnGNames());
        }
    }
    namespace sdk {
        void ToggleHud(bool bNewVal) {
            UGameViewportClient* viewport = instances::GetInstanceOf<UGameViewportClient>();
            if (viewport) {
                if (bNewVal) {
                    viewport->EnableScaleform();
                }
                else {
                    viewport->DisableScaleform();
                }
            }
        }
    }
}

BAKKESMOD_PLUGIN(NOHUDPlugin, "Disables the HUD", plugin_version, PERMISSION_ALL)

std::shared_ptr<CVarManagerWrapper> _globalCvarManager;

void NOHUDPlugin::onLoad()
{
	_globalCvarManager = cvarManager;
	LOG("No HUD Plugin - Made by yvngxenvy");
    plugin::globals::Init();
    LOG("Globals Initailized");
}

void NOHUDPlugin::RenderSettings()
{
    static bool status = true;

    ImGui::Text("Plugin made by yvngxenvy");
    ImGui::Separator();

    if (ImGui::Checkbox("Hud On", &status)) {
        gameWrapper->Execute([&](...) {
            plugin::sdk::ToggleHud(status);
        });
    }
}
