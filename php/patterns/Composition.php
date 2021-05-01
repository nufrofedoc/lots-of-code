<?php

class Vehicle
{
    public function move()
    {
        echo 'Move the car';
    }
}

class Car
{
    private $vehicle;

    public function __construct(Vehicle $vehicle)
    {
        $this->vehicle = $vehicle;
    }

    public function accelarate()
    {
        $this->vehicle->move();
    }
}

$vehicle = new Vehicle();
$car = new Car($vehicle);
$car->accelarate(); // Move the car
