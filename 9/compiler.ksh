#!/usr/bin/ksh
rm ./triplet
gcc -c triplet.c
gcc triplet.c -o triplet -lm
./triplet 
