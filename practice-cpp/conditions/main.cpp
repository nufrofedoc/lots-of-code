#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter first number: ";
    cin >> b;

    if (a > b) {
        cout << "Variable a is greater than variable b." << endl;
        cout << "Value of a is " << a << " value of b is " << b << endl;
    } else if (a == -1) {
        return 0;
    } else if (a == b) {
        cout << "Variable a equals variable b." << endl;
        cout << "Value of a is " << a << " value of b is " << b << endl;
    } else {
        cout << "Variable b is greater than variable a." << endl;
        cout << "Value of a is " << a << " value of b is " << b << endl;
    }

    return 0;
}
