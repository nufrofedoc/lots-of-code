<?php

$host = "localhost";
$username   = "root";
$password   = "root";
$dbname     = "polygon";

$conn = new mysqli($host, $username, $password);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "CREATE DATABASE $dbname";

if ($conn->query($sql) === true) {
    echo "Database $dbname created successfully";
} else {
    echo "Error creating database: " . $conn->error;
}

$conn->close();
