<?php

$arr = array('h', 'e', 'l', 'l', 'o');

// Simple approach
// $arr = array_reverse($arr);

$reversed  = array();

for ($i=0; $i<count($arr); $i++) {
    array_unshift($reversed, $arr[$i]);
}

for ($i=0; $i<count($reversed); $i++) {
    echo "$reversed[$i]";
}

