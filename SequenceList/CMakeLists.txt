cmake_minimum_required(VERSION 3.28)
project(SequenceList)

set(CMAKE_CXX_STANDARD 17)

add_executable(SequenceList main.c
        Status.h
        SqList.c
        SqList.h
        SqList.h)
