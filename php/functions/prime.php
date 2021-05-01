<?php

$list = array();
$prime = true;

for($i = 2; $i < 100; $i++) {
    for($j = 2; $j < $i; $j++) {
        if (($i % $j) == 0) {
            $prime = false;
        }
    }
    if ($prime == true) {
        $list[] = $i;
    }
    else {
        $prime = true;
    }
}

foreach ($list as $item) {
    echo $item . "</br>";
}
