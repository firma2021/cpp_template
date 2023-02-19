include(FetchContent)

FetchContent_Declare(
    nanobench
    GIT_REPOSITORY https://github.com/martinus/nanobench.git
    GIT_TAG v4.3.10
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(nanobench)

include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.9
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(doctest)

add_executable(test test.cpp)
add_executable(bench bench.cpp)

target_link_libraries(bench PRIVATE nanobench)
target_link_libraries(test PRIVATE doctest_with_main)