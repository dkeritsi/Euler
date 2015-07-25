#!/bin/awk/ -f
BEGIN {print "FILE\tOwner"}
   {print $8,"\t",$3}
END {print "-DONE-"}

