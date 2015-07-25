#!/usr/bin/ksh
gcc -c dec_to_bin.c
gcc dec_to_bin.c  -o dec_to_bin -lm
./dec_to_bin
