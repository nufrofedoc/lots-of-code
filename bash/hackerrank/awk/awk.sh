#!/usr/bin/sh

# 1
awk '{
if ($4 == "")
    print "Not all scores are available for",$1;
}'

# 2
awk '{
    if ($2 >= 50 && $3 >= 50 && $4 >= 50)
        print $1 " : Pass"
    else
        print $1 " : Fail"      
}'

# 3
awk '{
    if ($2 <= 50 || $3 <= 50 || $4 <= 50)
        print $0, ": FAIL";
    else if (($2 >= 60 && $2 <= 80) && ($3 >= 60 && $3 <= 80) && ($4 >= 60 && $4 <= 80))
        print $0, ": B";
    else
        print $0, ": A";
}'

# 4
awk 'ORS=NR%2?";":"\n"'
