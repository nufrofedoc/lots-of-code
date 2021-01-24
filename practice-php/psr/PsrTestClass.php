<?php

namespace Test;

//use Engine\Core\Driver;

class PsrTestClass extends BasePsrTestClass implements PsrTestInterface
{
    public function run():void
    {
        echo 'run';
    }

    /**
     * @param Bool $flag 
     */
    public function longFunctionName(Bool $flag)
    {
        if ($flag) {
            foreach (range(0, 9) as $number) {
                var_dump($number);
            }
        }
    }

    public function getData()
    {
        return [
            'date' => (new \DateTime())->format('Y-m-d'),
            'id'   => rand(1, 100)
        ];
    }

    public function getNameByCode($code)
    {
        $arr = [
            'error_code' => 'Error in application'
        ];

        return $arr[$code] ?? '';
        // return isset($arr[$code] ? $arr[$code] : '';
    }
}
