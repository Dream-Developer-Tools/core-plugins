#ifndef DDT_PACKAGEMANAGERPLUGIN_H
#define DDT_PACKAGEMANAGERPLUGIN_H

#include <Plugin.h>

#define VERSION "0.1.0"

inline const PluginAPI::Plugin* PackageManagerPlugin = nullptr;

extern "C" ReturnData runCommand(const std::string& pluginCalled, int argc, char** argv);

inline void registerPlugin()
{
}


#endif
