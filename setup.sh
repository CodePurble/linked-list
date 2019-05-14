#!/bin/bash

cp include/* $1;
cp src/* $2;

if ( $1 == test); then
    make makeDir && make;
    bin/test.out
fi