#!/usr/bin/ksh
gcc -c collatz_3.c
gcc collatz_3.c -o collatz_3 -lm
time ./collatz_3
