cmake_minimum_required(VERSION 3.16)
project(WhateverMusicEngine)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(
    include/
    ${GTEST_INCLUDE_DIRS}
)
file(GLOB WhateverMusicEngine_SRC
    "src/*.cpp"
)
file(GLOB Tests_SRC
    "tests/*.cpp"
)

add_library(whatevermusicengine SHARED ${WhateverMusicEngine_SRC})

add_executable(WhateverTest ${Tests_SRC})
target_link_libraries(
    WhateverTest ${GTEST_LIBRARIES} Threads::Threads whatevermusicengine)

enable_testing()
add_test(WhateverTest "./WhateverTest")
