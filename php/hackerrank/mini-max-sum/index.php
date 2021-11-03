<?php

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function miniMaxSum($arr) {
    // First step is sorting an array
    sort($arr);
    $min = 0; $max = 0;
    
    for ($i = 0; $i < count($arr); ++$i) {
        if ($i < count($arr)-1)
            $min += $arr[$i];
        if ($i != 0)
            $max += $arr[$i];
    }
    
    echo $min . " " . $max;
}

$arr_temp = rtrim(fgets(STDIN));

$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));

miniMaxSum($arr);
