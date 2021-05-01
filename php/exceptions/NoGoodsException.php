<?php

namespace common\components\exception;

use yii\helpers\Html;

class NoGoodsException extends \Exception
{
    const MESSAGE = 'This is message about error!';
    const CODE    = 500;

    public function __construct()
    {
        parent::__construct(self::MESSAGE, self::CODE, null);
    }
    
    public function testMessage()
    {
        return Html::encode('This is test exception message');
    }
}
