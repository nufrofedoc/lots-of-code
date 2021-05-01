#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
    int n;
    int age;
    string name;
    void Meow();
public:
    Cat(string na, int ag);
    int GetAge();
    Cat();
    string GetName();
    void Introduce();
    int GetN() { return n; }
};
