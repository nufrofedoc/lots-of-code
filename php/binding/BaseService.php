<?php

namespace common\components\example;

class BaseService 
{
    const MULTIPLIER = 0;

    protected $data = [];

    public function __construct(array $data = [])
    {
        $this->setData($data);
    }

    public function getResult()
    {
        return array_map(function ($item) {
            return $item * static::MULTIPLIER; // self -> static
        }, $this->getData());
    }

    public function setData(array $data = [])
    {
        $this->data = $data;
        return $this;
    }

    public function getData()
    {
        return $this->data;
    }
}
