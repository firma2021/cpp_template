cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(pname VERSION 1.0.0 LANGUAGES CXX)

# if (NOT CMAKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE Release)
# endif()


# if (PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
#     message(WARNING "project binary is same as project source dir")
# endif()


# find_package(Threads REQUIRED)

# # add_subdirectory(sub)

# file(GLOB srcs CONFIGURE_DEPENDS "*.cpp")
# foreach(src ${srcs})
#     get_filename_component(name ${src} NAME_WE)
#     add_executable(${name} ${src})
#     target_link_libraries(${name} Threads::Threads)

#     if(MSVC)
#         target_compile_options(${name} PRIVATE /W4 /WX)
#     elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
#         target_compile_options(${name} PRIVATE -Wall -Wextra -Wpedantic -Werror)
#         set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak") # address leak thread undefined memory
#     elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#         target_compile_options(${name} PRIVATE -Weverything -pedantic -Werror)
#         set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak") # address leak thread undefined memory
#     else()
#         # do nothing
#     endif()
# endforeach()

# option(ENABLE_TEST "build test files" ON)
# if(ENABLE_TEST)
#     message(STATUS "build test files")
#     add_subdirectory(test)
# endif()


set(VERBOSE ON)

function(print)
   foreach(var ${ARGN})
	message("${var} = ${${var}}")
   endforeach()
endfunction()

function(print_env)
   foreach(var ${ARGN})
	message("${var} = $ENV{${var}}")
   endforeach()
endfunction()


if (VERBOSE)
    print(CMAKE_VERSION)
    message(STATUS "---------------------------------")
    print(PROJECT_NAME)
    print(PROJECT_SOURCE_DIR)
    print(PROJECT_BINARY_DIR)
    print(CMAKE_SYSTEM_NAME)
    print(CMAKE_GENERATOR)
    print(CMAKE_CXX_COMPILER_ID)
	print(CMAKE_PREFIX_PATH)
endif()

print_env(LANG)
print_env(CMAKE_PREFIX_PATH)