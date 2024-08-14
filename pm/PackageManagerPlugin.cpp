#include "PackageManagerPlugin.h"
#include <memory>

ReturnData runCommand(const std::string& pluginCalled, int argc, char **argv) {
    if (pluginCalled == "pm")
    {
        std::string command = argv[0];
        if (command == "version" || command == "v")
        {
            return ReturnData{VERSION, SUCCESS};
        }
    }

    return ReturnData{"UC", UNKNOWN_COMMAND};
}

extern "C" int createPlugin(const CORE_CALLBACK& callback, const std::string& uuid, const std::string& pluginStack) {
    PackageManagerPlugin = new PluginAPI::Plugin(callback, uuid, "Package Manager", VERSION, pluginStack);
    return 0;
}