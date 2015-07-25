#!/usr/bin/ksh
gcc -c divisible.c
gcc divisible.c -o divisible -lm
./divisible
