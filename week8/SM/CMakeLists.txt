cmake_minimum_required(VERSION 3.22)
project(SM)

set(CMAKE_CXX_STANDARD 14)

add_executable(SM main.cpp LinkedList.h stdafx.h State.h Transition.h FSM.h)
