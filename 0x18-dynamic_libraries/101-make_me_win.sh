#!/bin/bash
echo 'int rand() { static int i = 0; int nums[] = {9, 8, 10, 24, 75, 9}; return nums[i++]; }' > /tmp/custom_rand.c
gcc -fPIC -shared -o /tmp/custom_rand.so /tmp/custom_rand.c
export LD_PRELOAD=/tmp/custom_rand.so
