#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "enter number of elements: ";
    cin >> N;

    int * A = new int[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];
    cout << "____________" << endl;

    for (int i = 0; i < N; i++)
        cout << A[i] << endl;

    delete[] A;

    getchar();

    return 0;
}
