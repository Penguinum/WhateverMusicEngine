cmake_minimum_required(VERSION 3.16)
project(WhateverMusicEngine)

include_directories(
    include/
)
file(GLOB WhateverMusicEngine_SRC
    "src/*.cpp"
)

add_library(whatevemusicengine SHARED ${WhateverMusicEngine_SRC})
