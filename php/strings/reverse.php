<?php

$str = "Some string";

// Simple approach
//$str = strrev($str);

// #1
for ($i = strlen($str); $i>=0; $i--) {
    $rev[] = $str[$i];
}

$revstr = implode("", $rev);
echo $revstr;

// #2
function myReverse($src) {
    $length = strlen($src);
    for ($i = 0; $i < $length / 2; $i++) {
        $a = $src[$i];
        $src[$i] = $src[$length - $i - 1];
        $src[$length - $i - 1] = $a;
    }
    return $src;
}
echo myReverse($str);

// #3
$a = 'Some string 2';
$b = '';
for ($i = strlen($a)-1; $i>=0; $i--) {
    $b .= $a[$i];
}
$a = $b;
echo $a;
