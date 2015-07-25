#!/usr/bin/ksh
gcc -c number_length.c
gcc -Wall number_length.c -o number_length -lm
time ./number_length
