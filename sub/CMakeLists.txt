file (GLOB_RECURSE srcs CONFIGURE_DEPENDS "*.cpp")
add_library(libname STATIC ${srcs})
target_include_directories(libname PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

