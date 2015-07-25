#!/usr/bin/ksh
gcc -c square_root.c
gcc square_root.c -o square_root -lm
time ./square_root 
