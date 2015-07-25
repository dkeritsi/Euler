#!/usr/bin/ksh
gcc -c dyno_2.c
gcc dyno_2.c -o dyno_2 -lm
time ./dyno_2
