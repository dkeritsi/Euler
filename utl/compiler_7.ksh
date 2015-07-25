#!/usr/bin/ksh
gcc -c primacy_fast.c
gcc primacy_fast.c  -o primacy_fast -lm
./primacy_fast
