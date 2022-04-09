#!/usr/bin/sh

arr=($(cat))
newArr=("${arr[@]}" "${arr[@]}" "${arr[@]}")

echo ${newArr[@]}
