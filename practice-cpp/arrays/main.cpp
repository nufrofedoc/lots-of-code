#include <iostream>
using namespace std;

int main()
{
    int b[5];
    for (int i=0; i<5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> b[i];
    }
    b[0] = 10000;
    int c = b[4];
    for (int i=0; i<5; i++) {
        cout << b[i] << endl;
    }

    cout << "value of c is " << c << endl;
    cout << b[99] << endl;

    return 0;
}
