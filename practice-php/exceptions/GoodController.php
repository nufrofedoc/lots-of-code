<?php

namespace backend\controllers;

class GoodController
{
    public function actionGoods()
    {
        $goods = [];
        try {
            $goods = Goods::getActiveGoods();
        } catch (NoGoodsException $e) {
            echo $e->getMessage();die;
        } catch (\Exception $e) {
            $e->getMessage()
        }

        return $this->render('goods', [
            'goods' => $goods
        ]);
    }
}
    
