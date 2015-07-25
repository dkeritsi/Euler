#!/usr/bin/ksh
rm ./product
gcc -c product.c
gcc product.c -o product -lm
./product
