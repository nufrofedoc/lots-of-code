#!/usr/bin/sh

read input

if [ "$input" = "Y" ] || [ "$input" = "y" ]; then
    echo "YES"
fi

if [ "$input" = "N" ] || [ "$input" = "n" ]; then
    echo "NO"
fi
