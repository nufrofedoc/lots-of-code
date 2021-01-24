<?php

/**
 * $arr = [1, ... , 100]
 * $item = 27
 * 
 * 1)
 * start 1, final = 100
 * half = (int)((1 + 100) / 2) = 50
 * 50 > 27 ? final = 50 - 1
 * 
 * 2)
 * start = 1, final = 49
 * half = (int)((1 + 49) / 2) = 25
 * 25 < 27 ? start = 25 + 1
 * 
 * 3)
 * start = 26, final = 49
 * half = (int)((26 + 49) / 2) = 37
 * 37 > 27 ? final = 37 - 1
 *  
 * 4)
 * start = 26, final = 36
 * half = (int)((26 + 36) / 2) = 31
 * 31 > 27 ? final = 31 - 1
 *
 * 5)
 * start = 26, final = 30
 * half = (int)((26 + 30) / 2) = 28
 * 28 > 27 ? final = 28 - 1
 * 
 * 6)
 * start = 26, final = 27
 * half = (int)((26 + 27) / 2) = 26
 * 26 < 27 ? start = 26 + 1
 *
 * 7)
 * start = 27, final = 27
 * half = (int)((27 + 27) / 2) = 27
 * 27 == 27
 * 
 */

$nums = range(1, 1000000);

function binarySearch($arr, $item, $start = 0, $final = null) {
    if ($final === null) {
        $final = count($arr) - 1;
    }
    if ($start > $final) {
        return 'Item not found'; 
    }
    $half = (int)(($start + $final) / 2);

    if ($arr[$half] !== $item) {
        if ($arr[$half] < $item) {
            $start = $half + 1;
        } else {
            $final = $half - 1;
        }
        return binarySearch($arr, $item, $start, $final);
    }
    return $half;
}

$start = microtime(true);

var_dump(binarySearch($nums, 1000000)); // 0.000032
//var_dump(array_search(1000000, $nums)); // 0.0028488

$time = round(microtime(true) - $start, 6);
echo "<p><b>Time:</b> $time</p>";
