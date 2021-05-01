<?php

ERROR_REPORTING(-1);
$arr = [];

$arr = [1, 2, 3, 4, 5, 6, 7];

next($arr); // Next item of array
next($arr);
next($arr);
next($arr);
prev($arr);
prev($arr); // Previous item of array
prev($arr);
prev($arr);
echo reset($arr); // First item of array
echo end($arr);   // Last item of array
echo current($arr);
echo pos($arr);

echo array_product($arr);
echo array_sum($arr);

$arr2 = array_pad($arr, 20, 30);
var_dump($arr2);

var_dump(array_diff($arr2, $arr));


