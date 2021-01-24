<?php

foreach (new \DatePeriod((new \DateTime('now')), new \DateInterval('P1M'), (new \DateTime())->modify('+1 year')) as $date) {
    echo $date->format('Y-m-d') . '<br>';
}

$timeStamp = 1341343145;
echo (new \DateTime())->setTimeStamp($timeStamp)->format('Y-m-d H:i:s');

//echo (new DateTime('now'))->getTimestamp();

$data = [];
foreach (new \DatePeriod((new \DateTime('now')), new \DateInterval('P1M'), (new \DateTime())->modify('+1 year')) as $date) {
    $data[$date->format('Y-m-d')] = rand(300, 2000);
}

var_dump($data);
