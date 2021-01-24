<?php

// 1. Strings: substr, begin, end
$str = '<a href="test string test test test end"></a>';
echo preg_match('/test/', $str) ? 'success' : 'false';
preg_match('/^test/', $str, $match);
preg_match('/end\z/', $str, $match);
preg_match('/\w+\s+\w+/', $str, $match); 
preg_match('/(<a).*/', $str, $match);
var_dump($match);

// 2. Numbers
$str = 'mest 47 string test 753 test test 5858-++==_';
$num = '345858---1383828';
preg_match_all('/\d+/', $str, $match);
preg_match_all('/(t|m)est/', $str, $match);
preg_match('/\d+\-{3,}\d+/', $num, $match);
preg_match('/[0-9]+/', $num, $match);
preg_match('/[a-z]+/', $str, $match);
preg_match('/[-+==_]{3}/', $str, $match);

var_dump($match);
echo implode('', current($match));

