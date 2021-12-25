#!/usr/bin/sh

read a
read b
read c

if [ $a -eq $b ] && [ $a -eq $c ] && [ $b -eq $c ]
then
    echo "EQUILATERAL"
elif [ $a -eq $b ] || [ $b -eq $c ] || [ $a -eq $c ]
then
    echo "ISOSCELES"
else
    echo "SCALENE"
fi
