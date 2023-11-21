# Plugins to build

# Dependencies
set ( CMAKE_CXX_STANDARD 17 ) 
set ( CMAKE_CXX_STANDARD_REQUIRED ON )
set ( CMAKE_CXX17_STANDARD_COMPILE_OPTION "-std=c++17" )
set ( CMAKE_CXX17_EXTENSION_COMPILE_OPTION "-std=c++17" )
set ( CMAKE_CXX_EXTENSIONS ON )

set( CONFIGS
    UDA_workshop_plugin.cfg
)

set( SOURCES
    UDA_workshop_plugin.cpp
)

set( HEADERS
    UDA_workshop_plugin.h
)

include( plugins )
uda_plugin(
    NAME DRAFT_JSON
    ENTRY_FUNC DRAFTDataReader
    DESCRIPTION "Plugin for the UDA Mapping Workshop and mapping DRAFT JSON data"
    EXAMPLE "DRAFT_JSON::get()"
    LIBNAME UDA_workshop_plugin
    SOURCES UDA_workshop_plugin.cpp
    CONFIG_FILE ${CONFIGS}
    EXTRA_INCLUDE_DIRS
      ${UDA_CLIENT_INCLUDE_DIRS}
    EXTRA_LINK_DIRS
      ${UDA_CLIENT_LIBRARY_DIRS}
    EXTRA_LINK_LIBS
      ${UDA_CLIENT_LIBRARIES}
      uda_cpp
)

list( TRANSFORM SOURCES PREPEND ${CMAKE_CURRENT_LIST_DIR}/ )
list( TRANSFORM HEADERS PREPEND ${CMAKE_CURRENT_LIST_DIR}/ )

set_property( TARGET clang-format APPEND PROPERTY SOURCES ${SOURCES} ${HEADERS} )
