#!/bin/bash

if ( $1 == test); then
    make makeDir && make;
    bin/test.out
else
    INC=$1;
    SRC=$2;
    if [ ! -d $INC ] && [ ! -d $SRC]; then
        mkdir $INC;
        mkdir $SRC;
    elif [ ! -d $SRC]; then
        mkdir $SRC;
    elif [ ! -d $INC]; then
        mkdir $INC;
    fi
    cp src/* $SRC;
    cp include/* $INC;
fi
