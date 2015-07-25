#!/usr/bin/ksh
gcc -c collatz_2.c
gcc collatz_2.c -o collatz_2 -lm
time ./collatz_2
