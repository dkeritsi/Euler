#!/usr/bin/ksh
gcc -c squares.c
gcc squares.c -o squares -lm
./squares
