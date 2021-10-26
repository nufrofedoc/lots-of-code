<?php

// Complete the compareTriplets function below.
function compareTriplets($a, $b) {
    $f = 0;
    $s = 0;
    
    for ($i = 0; $i < count($a); ++$i) {
        if ($a[$i] == $b[$i])
            continue;
        
        if ($a[$i] > $b[$i]) {
            $f += 1;
            continue;
        } else {
            $s += 1;
            continue;
        }       
    }
    return array($f, $s);
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$a_temp = rtrim(fgets(STDIN));

$a = array_map('intval', preg_split('/ /', $a_temp, -1, PREG_SPLIT_NO_EMPTY));

$b_temp = rtrim(fgets(STDIN));

$b = array_map('intval', preg_split('/ /', $b_temp, -1, PREG_SPLIT_NO_EMPTY));

$result = compareTriplets($a, $b);

fwrite($fptr, implode(" ", $result) . "\n");

fclose($fptr);
