#include "Cat.h"

Cat::Cat(string na, int ag)
{
    name = na;
    age = ag;
    n = 5;
}

Cat::Cat()
{
    age = 0;
    name = "Unnamed";
    n = 0;
}

int Cat::GetAge()
{
    return age;
}

string Cat::GetName()
{
    return name;
}

void Cat::Meow()
{
    cout << "Meow!" << endl;
}

void Cat::Introduce()
{
    Meow();
    cout << "My name is " << name << " and I'm " << age << " years old!" << endl;
}
