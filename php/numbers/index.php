<?php

$number = 10000000;
// echo mb_substr($number, 0, 1) . ' ' . mb_substr($number, -3);

echo number_format($number, 3, '.', ' ');
