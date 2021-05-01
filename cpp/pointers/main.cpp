#include <iostream>
using namespace std;

int main()
{
    int *p;
    int n = 0;
    p = &n;
    cout << n << endl;
    *p = 1;
    cout << n << endl;
    *p = *p + 10;
    cout << n << endl;
    (*p)++;
    cout << n << endl;
    return 0;
}
