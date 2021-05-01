<?php

ignore_user_abort(true);

ob_start();
// do initial processing here

echo "Response has sent and You see this message! But script continue working!";
header('Connection: close');
header('Content-Length: ' . ob_get_length());
// flush all output

ob_end_flush();
ob_flush();
flush();
// code which continue working after sending response
sleep(10);
file_put_contents("12.txt", "Script ends his work!");

