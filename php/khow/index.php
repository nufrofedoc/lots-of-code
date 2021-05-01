<?php

$str = 'testmy';

if (stripos($str, 'test') !== false) {
    echo 1;
} else {
    echo 2;
}

// ==================

$a = 5;

if ($a > 1) {
    echo 1;
} elseif( $a == 5) {
    echo 2;
} else {
    echo 3;
}

// ==================

$obj = new \StdClass();
$obj->a = 100;

function test(\StdClass $obj) {
    $obj->b = 200;
}

test($obj);
var_dump($obj);

// ==================

$dto1 = new TestDto(1, 'test');
$dto1 = new TestDto(1, 'test');
$dto1->test($dto2);

// ==================

$dto1 = new TestDto(1, 'test'); //  public function __invoke()
$dto1();

// ==================

throw new MyException('test');

// ==================

abstract class AbstractDto
{
    const SOME = 10;
}
var_dump(AbstractDto::SOME);
