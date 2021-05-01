<?php

$arr = array(1, 2, 3, 4, 15, 100, 210, 3, 4096, 1024, 512, 79, 38);
echo max($arr);

// Without a standard function
$arr = array(5, 51, 234, 48, 24, 51, 65);
$max = $arr[0];

foreach ($arr as $val) {
    if ($max < $val) {
        $max = $val;
    }
}

echo $max;
