<?php

$find = array('foo', 'bar', 'fooz');
$replace = array('f*o', 'b*r', 'f**z');

if (isset($_POST['user_input']) && !empty($_POST['user_input'])) {
    $user_input = $_POST['user_input'];
    $user_input_new = str_ireplace($find, $replace, $user_input);
    echo $user_input_new;
}

?>

<html>
<head></head>
<body>

<form action="" method="POST">
<textarea name="user_input" rows="7" cols="30"></textarea>
<input type="submit" value="Submit">
</form>

</body>
</html>
