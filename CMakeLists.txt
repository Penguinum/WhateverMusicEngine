cmake_minimum_required(VERSION 3.16)
project(WhateverMusicEngine)

file(GLOB WhateverMusicEngine_SRC
    "*.h"
    "*.cpp"
)

add_library(whatevemusicengine SHARED ${WhateverMusicEngine_SRC})
