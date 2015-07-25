#!/usr/bin/ksh
gcc -c dyno.c
gcc dyno.c -o dyno -lm
time ./dyno
