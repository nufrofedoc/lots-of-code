#!/usr/bin/sh

# 1
sed -e 's/the /this /'

# 2
sed -e 's/thy /your /gi'

# 3
sed -e 's/thy/{&}/gI'

# 4
sed -r 's/[0-9]{4} /**** /g'

# 5
sed -r 's/(.+ )(.+ )(.+ )(....)/\4 \3\2\1/'
