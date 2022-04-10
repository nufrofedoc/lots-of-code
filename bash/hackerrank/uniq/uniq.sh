#!/usr/bin/sh

# 1
uniq

# 2
uniq -c | cut -c 7-

# 3
uniq -ci | cut -c 7-

# 4
uniq -u
