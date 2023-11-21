#ifndef UDA_WORKSHOP_PLUGIN_H
#define UDA_WORKSHOP_PLUGIN_H

#include <clientserver/export.h>
#include <plugins/udaPlugin.h>

#ifdef __cplusplus
extern "C" {
#endif

#define THISPLUGIN_VERSION 1
#define THISPLUGIN_MAX_INTERFACE_VERSION 1 // Interface versions higher than this will not be understood!
#define THISPLUGIN_DEFAULT_METHOD "help"

LIBRARY_API [[maybe_unused]] int DRAFTDataReader(IDAM_PLUGIN_INTERFACE* idam_plugin_interface);

#ifdef __cplusplus
}
#endif

#endif // UDA_WORKSHOP_PLUGIN_H
