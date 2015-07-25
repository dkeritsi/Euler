#!/usr/bin/ksh
gcc -c pow_of_2.c
gcc pow_of_2.c -o pow_of_2 -lm
time ./pow_of_2
