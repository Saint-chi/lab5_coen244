cmake_minimum_required(VERSION 4.1)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Animal.cpp
        Animal.h
        Dog.cpp
        Dog.h
        Cat.cpp
        Cat.h
        BabyDog.cpp
        BabyDog.h
        Walker.cpp
        Walker.h
        Swimmer.cpp
        Swimmer.h
        Amphibian.cpp
        Amphibian.h)
