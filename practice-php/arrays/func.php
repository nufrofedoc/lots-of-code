<?php

$arr = [0, 1, 2, 33, '', 'text'];
var_dump(array_filter($arr));

$arr = [0, 1, 2, 33, '', 'text'];
var_dump(array_filter($arr, function($element) {
    return $element > 1;
}));

$number = 4;
$arr = [0, 1, 2, 33, '', 'text'];
var_dump(array_map(function($el) use ($number) {
    return $el + 4;
}, $arr));

$arr = ['test', 'text'];
var_dump(array_map('strtoupper', $arr));

$arr = [0, 1, 2, 33, '', "3text2"];
var_dump(array_walk($arr, function($el) {
    return $el + 4;
}));
