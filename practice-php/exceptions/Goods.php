<?php

namespace backend\models;

class Goods {
    public static function getActiveGoods()
    {
        $goods = self::find()->where(['active' => self::ACTIVE])->all();
        if (!$goods) {
            throw new NoGoodsException();
        }

        return $goods;
    }
}
