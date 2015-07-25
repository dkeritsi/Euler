#!/usr/bin/ksh
gcc -c dyno_3.c
gcc dyno_3.c  -o dyno_3 -lm
./dyno_3
