#!/usr/bin/ksh
gcc -c problem3.c
gcc problem3.c -o problem3 -lm
time ./problem3
