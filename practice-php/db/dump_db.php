<?php

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

$host     = 'localhost';
$username = 'root';
$password = 'root';
$dbname   = 'polygon';

$dir = dirname(__FILE__) . '/dump.sql';

echo "<h2>Dumping up database to `<code>{$dir}</code>`</h2>";

exec("mysqldump --user={$user} --password={$pass} --host={$host} {$dbname} --result-file={$dir} 2>&1", $output);

var_dump($output);
    
