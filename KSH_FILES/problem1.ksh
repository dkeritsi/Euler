#!/bin/ksh
typeset -i count
export i=1
while (( $i <= 10))  do
   echo "Welcome $i times"
   (( i +=1 ))
done


