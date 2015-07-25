#! /bin/awk -f
awk '
      BEGIN { print "names.txt" > "names_revised.txt" }
' 
#cut -d , -f$n names.txt
