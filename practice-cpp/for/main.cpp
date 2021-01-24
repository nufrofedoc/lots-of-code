#include <iostream>
using namespace std;

int main()
{
    cout << "Red text" << endl;

    int b = 0;

    for (int i=0; i < 10; i+=2) {
        cout << "Line number " << i << endl;
        int input;
        cin >> input;
        b += input;
    }
    cout << b << endl;

    return 0;
}
