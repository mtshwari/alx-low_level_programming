#!/bin/bash
gc -fPIC -c *.c
gcc -shared -o liball.so libdynamic.o
