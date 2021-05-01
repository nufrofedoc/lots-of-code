<?php

namespace Test;

interface PsrTestInterface\Test
{
    public function run();

    /**
     * @param string $code
     * @return string
     */
    public function getNameByCode($code);
}
