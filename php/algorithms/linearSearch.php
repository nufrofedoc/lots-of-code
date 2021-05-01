<?php

$nums = range(1, 1000000);

function linearSearch($arr, $item) {
    foreach ($arr as $key => $value) {
        if ($value === $item) {
            return $key;
        }
    }
    return false;
}

$start = microtime(true);

var_dump(linearSearch($nums, 1000000)); // 0.03585
//var_dump(array_search(1000000, $nums)); // 0.00230

$time = round(microtime(true) - $start, 6);
echo "<p><b>Time:</b> $time </p>";
