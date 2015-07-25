#!/usr/bin/ksh
gcc -c square_root.c
gcc -Wall square_root.c -o square_root -lm
./square_root
