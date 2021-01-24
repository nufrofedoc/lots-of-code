#include <iostream>
#include "Cat.cpp"
using namespace std;

int main()
{
    Cat cat1("Frisky", 2);
    Cat cat2("Biscuit", 1);
    Cat catC;
    cat1.Introduce();
    cat2.Introduce();
    catC.Introduce();
    cout << cat2.GetN() << endl;
    return 0;
}
