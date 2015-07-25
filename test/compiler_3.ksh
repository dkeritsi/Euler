#!/usr/bin/ksh
gcc -c divisors_test.c
gcc divisors_test.c -o divisors_test -lm
time ./divisors_test 
