#!/usr/bin/sh

# 1
grep -w "the"

# 2
grep -wi "the"

# 3
grep -iwv -e "that"

# 4
grep -Eiw 'th(e|at|en|ose)'

# 5
grep '\([0-9]\) *\1'
