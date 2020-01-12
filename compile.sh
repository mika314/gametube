#!/bin/bash

for exe in client server test; do
    cd $exe
    echo Entering directory \`$exe\'
    coddle debug
    echo Leaving directory \`$exe\'
    cd ..
done
