#!/bin/bash

if [ "$1" == "example" ]; then
    make makeDir && make;
    bin/example.out;
elif [ $# == 2 ]; then
    INC=$1;
    SRC=$2;
    if [ ! -d $INC ] && [ ! -d $SRC ]; then
        mkdir -v $INC;
        mkdir -v $SRC;
    elif [ ! -d $SRC ]; then
        mkdir -v $SRC;
    elif [ ! -d $INC ]; then
        mkdir -v $INC;
    fi
    cp -v src/linkedList.c $SRC;
    cp -v include/* $INC;
else
    echo "error: No valid arguments given!!";
    echo "Please enter one of these as arguments-";
    echo "1. <path_to_your_include_dir> <path_to_your_source_dir>";
    echo "2. example";
fi
