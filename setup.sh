#!/bin/bash

if ( $1 == test); then
    make makeDir && make;
    bin/test.out
else
    INC=$1;
    SRC=$2;

    if [ ! -d $INC ]; then
        mkdir $INC
    elif [ ! -d $SRC]; then
        mkdir $SRC
    else
        mkdir $INC
        mkdir $SRC
    fi
    
    cp src/* $SRC;
    cp include/* $INC;
fi
