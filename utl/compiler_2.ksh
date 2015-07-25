#!/usr/bin/ksh
rm ./prime_check
gcc -c prime_check.c
gcc prime_check.c -o prime_check -lm
time ./prime_check
