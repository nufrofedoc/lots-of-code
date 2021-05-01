<?php

function fibonacci($n)
{
    if ($n < 3) {
        return 1;
    } else {
        return fibonacci($n-1) + fibonacci($n-2);
    }
}

for ($n = 1; $n <= 16; $n++) {
    echo (fibonacci($n) . ", ");
}

echo ("...\n");
