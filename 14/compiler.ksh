#!/usr/bin/ksh
gcc -c collatz.c
gcc collatz.c -o collatz -lm
time ./collatz
