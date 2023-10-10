cmake_minimum_required(VERSION 3.26)
project(td3)

set(CMAKE_CXX_STANDARD 23)

add_executable(td3 main.cpp
        source/boite.cpp
        header/boite.h
        source/boiteEnMateriaux.cpp
        header/boiteEnMateriaux.h
)
