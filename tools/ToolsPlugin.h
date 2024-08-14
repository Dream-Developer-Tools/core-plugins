#ifndef TOOLSPLUGIN_H
#define TOOLSPLUGIN_H

#include <plugin.h>

#define VERSION "0.1.0"

struct ToolsPlugin : Plugin
{
    ToolsPlugin(const CORE_CALLBACK& callback, const std::string& uuid, const std::string& pluginStack) : Plugin(callback, uuid, pluginStack) {}
    ReturnData runCommand(const std::string& pluginCalled, int argc, char** argv);
    void registerPlugin() final {}
    std::string name = "Tools";
};


#endif //TOOLSPLUGIN_H
