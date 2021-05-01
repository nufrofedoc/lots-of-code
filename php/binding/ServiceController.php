<?php

class ServiceController extends Controller
{
    protected $serviceA;
    protected $serviceB;
    protected $serviceC;

    public function actionIndex()
    {
        $data = [2, 3, 4, 5, 6, 7, 8];
        $this->serviceA->setData($data);
        var_dump($this->serviceA->getResult());
        $this->serviceB->setData($data);
        var_dump($this->serviceB->getResult());
        $this->serviceC->setData($data);
        var_dump($this->serviceC->getResult());        
    }
}
