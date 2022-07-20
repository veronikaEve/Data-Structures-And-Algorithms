cmake_minimum_required(VERSION 3.22)
project(Hash)

set(CMAKE_CXX_STANDARD 14)

add_executable(Hash main.cpp GameObject.h HashTable.h HashTableStr.h GameObjectStr.h)
