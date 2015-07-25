#!/usr/bin/ksh
gcc -c prime_count.c
gcc prime_count.c -o prime_count -lm
time ./prime_count
