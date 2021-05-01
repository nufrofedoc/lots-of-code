#include <iostream>
using namespace std;

class Parent
{
private:
    int varS;
    void PrintVarS();
public:
    int varP;
    void PrintVarP();
    Parent() { varS = 5; varP = 10; }
protected:
    int varX;
    void PrintX() {
        cout << "x = " << varX << endl;
    }
    void SetX(int x) { varX = x; };
};

void Parent::PrintVarP()
{
    cout << "P - " << varP << endl;
}

void Parent::PrintVarS()
{
    cout << "S - " << varS << endl;
}

class Child : public Parent
{
public:
    void SetP(int a) { varP = a; SetX(a); PrintX(); }
};

int main()
{
    Parent p;
    p.PrintVarP();
    Child c;
    c.PrintVarP();
    c.SetP(30);
    c.PrintVarP();
    p.PrintVarP();

    return 0;
}
