<?php

// 1. in_array vs key_exists (maps vs lists)

$arr = [
    ['one'  => 'one',
     'fsfs' => 'fsfs',
     'fkfk' => 'fkfk'
    ],
    ['one'  => 'one',
     'fsfs' => 'fsfs',
     'fkfk' => 'fkfk'
    ]
];

var_dump(array_keys($arr));

if (key_exists(1, $arr)) {
    echo 1;
}

// 2. count vs empty (in db count vs exists)

$arr2 = range(1, 1000000);

$start = microtime(true);

foreach ($arr2 as $item) {
    // if (!empty($arr)) {
    if (count($arr2)) {

    }
}

// if (!empty($arr2)) {
//     echo 'empty';
// }

var_dump($microtime(true) - $start);

// 3. cache
// @todo Do something

// 4. db query in loops
// @todo Do something
