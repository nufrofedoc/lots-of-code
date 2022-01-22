#!/usr/bin/sh

read n                            
sum=0
                  
for (( c=1; c<=$(($n)); c++ ))
do
    read num
    sum=$(($sum+$num))
done
                  
printf "%.3f" $(echo "scale = 4; $sum/$n" | bc)
