<?php

$arr = array(3, 8, 15, 25, 15, 11, 34, 35, 19, 10, 7, 30);

for ($ = 0; $i <= count($arr); $i++) {
    if ($arr[$i] % 5 == 0) {
        echo $arr[$i] . "</br>"; // numbers divide by 5
    }
}
