<?php

function curry(callable $func, $argument): \Closure
{
    return function (...$arguments) use ($func, $argument) {
        return $func(...array_merge([$argument], $arguments));
    };
}

function getSalary(string $type, string $country): int
{
    $map = [
        'developer' => [
            'USA'    => 10000,
            'Poland' => 6000,
        ],
        'QA' => [
            'USA'    => 6000,
            'Poland' => 4000,
        ],
    ];

    return $map[$type][$country];
}

// echo getSalary('developer', 'USA');
$getDeveloperSalary = curry('getSalary', 'developer');
echo $getDeveloperSalary('Poland');
