#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libalt a * .0
ranlib liball.a
