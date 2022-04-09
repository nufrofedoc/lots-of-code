#!/usr/bin/sh

arr=($(cat))

declare -a patter=( ${arr[@]/*[aA]*/} )
echo ${patter[@]}
