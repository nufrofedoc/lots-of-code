<?php

do {
    $a = rand(0, 10);
    $b = rand(0, 10);
    $c = rand(0, 10);

    $result = $a + $b + $c;

    echo $result . "</br>"; // 3 random numbers in range from 0 to 10
} while ($a + $b + $c < 14);
