<?php

class Singleton
{
    private $props;
    private static $instance;

    private function __construct() {}
    private function __clone() {}
    private function __wakeup() {}

    public static function getInstance(): Singleton
    {
        if (empty(self::$instance)) {
            self::$instance = new static();
        }

        return self::$instance;
    }

    public function setProperty(string $key, $value)
    {
        $this->props[$key] = $value;
    }

    public function getProperty($key)
    {
        return $this->props[$key] ?? null;
    }
}

$pref = Singleton::getInstance();
$pref->setProperty('name', 'Ivan');

unset($pref);

$pref2 = Singleton::getInstance();
echo $pref2->setProperty('name') . PHP_EOL;
