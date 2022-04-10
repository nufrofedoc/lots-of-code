#!/usr/bin/sh

# 1
sort

# 2
sort -r

# 3
sort -n

# 4
sort -n -r

# 5
sort -t$'\t' -nr -k2

# 6
sort -t$'\t' -n -k2

# 7
sort -t$'|' -nr -k2
