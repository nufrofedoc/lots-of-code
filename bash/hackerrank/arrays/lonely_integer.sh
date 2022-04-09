#!/usr/bin/sh

read
arr=($(cat))
arr=${arr[*]}
echo $((${arr// /^}))
