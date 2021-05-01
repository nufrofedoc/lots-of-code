#include <iostream>
using namespace std;

class Point
{
private:
    int x,y;
public:
    int getX() {return x;}
    int getY() {return y;}
    void print()
    {
        cout << x << " " << y << endl;
    }
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Point p1, p2;
    p1.set(5, 1);
    p1.print();
    p2.set(1, 5);
    p2.print();
    p1 = p2;
    p1.print();

    return 0;
}
