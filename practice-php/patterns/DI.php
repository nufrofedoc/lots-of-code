<?php

interface DatabaseInterface
{
    public function connect();
}

class Database implements DatabaseInterface
{
    public function connect()
    {
        // do something
    }
}

class UserRepository
{
    private $db;

    public function __construct(DatabaseInterface $db)
    {
        $this->db = $db;
    }
    
    public function getUsers()
    {
        $connection = $this->db->connect();

        // get all users from db
    }
}

// client code

$dbMysql = new DatabaseMySQL();
$dbSqlite = new DatabaseMySQLite();

// from mysql
$userRepo = new UserRepository($dbMysql);
$userRepo->getUsers();

// from sqlite
$userRepo = new UserRepository($dbSqlite);
$userRepo->getUsers(); // from mysql
