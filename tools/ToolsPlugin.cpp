#include "ToolsPlugin.h"
#include <memory>
#include <iostream>
#include <utility>

ReturnData ToolsPlugin::runCommand(const std::string& pluginCalled, int argc, char **argv) {
    if (pluginCalled == "tools")
    {
        std::string command = argv[0];
        if (command == "version" || command == "v")
        {
            return ReturnData{VERSION, SUCCESS};
        }
        return ReturnData{"UC", UNKNOWN_COMMAND};
    }

    return ReturnData{"UC", UNKNOWN_COMMAND};
}

extern "C" Plugin* createPlugin(const CORE_CALLBACK& callback, const std::string& uuid, const std::string& pluginStack) {
    return new ToolsPlugin(callback, uuid, std::move(pluginStack));
}