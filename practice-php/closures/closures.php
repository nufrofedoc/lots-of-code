<?php

class ClosureService
{
    public function getFactorial()
    {
        $factorial = function($n) use (&$factorial) {
            if ($n === 1) {
                return 1;
            }

            return $factorial($n - 1) * $n;
        };

        return $factorial;
    }

    public function getClosure()
    {
        return function () {
            return self::NUMBER;
        };
    }
}

class AnotherClosureService
{
    private const NUMBER = 100;
}

$closureService = new ClosureService();
$factorial = $closureService->getFactorial();

$closure = $closureService->getClosure();
echo $closure->call(new AnotherClosureService());
