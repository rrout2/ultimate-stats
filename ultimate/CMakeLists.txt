cmake_minimum_required(VERSION 3.9)
project(ultimate)

set(CMAKE_CXX_STANDARD 11)

add_executable(ultimate
        main.cpp
        mainwindow.cpp
        mainwindow.h
        player.cpp
        player.h)
