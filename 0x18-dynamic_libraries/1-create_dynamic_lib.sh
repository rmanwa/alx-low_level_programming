#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD-LIBRARY_PATH=.:$LD_LIBRARY_PATH
