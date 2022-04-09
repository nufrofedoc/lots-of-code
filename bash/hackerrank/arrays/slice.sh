#!/usr/bin/sh

arr=($(cat))
echo ${arr[@]:3:5}
