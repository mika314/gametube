#!/bin/bash

for exe in client; do
    cd $exe
    echo Entering directory \`$exe\'
    coddle debug
    echo Leaving directory \`$exe\'
    cd ..
done
