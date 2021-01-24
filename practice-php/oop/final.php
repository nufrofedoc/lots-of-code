<?php

final class Abc {
    public $num = 200;
    
    final public function Some() {
        return 200;
    }
}

class Bcd extends Abc {
    public $b = 300;
    public function Some() {
        return 300;
    }
}

    
