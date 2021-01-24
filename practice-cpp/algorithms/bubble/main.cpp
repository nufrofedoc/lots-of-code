#include <iostream>
using namespace std;

int* bubbleSort(int* a, int N);
void printArray(int* a);

int main()
{
    int a[5] = {3, 51, 14, 23, 12};

    cout << "Before a sorting:" << endl;
    printArray(a);

    cout << "After a sorting:" << endl;
    bubbleSort(a, 5);
    printArray(a);

    return 0;
}

int* bubbleSort(int* a, int N)
{
    for (int i = 0; i < N-1; i++) {
        bool changed = false;
        for (int j = 0; j < N-i-1; j++) {
            if (a[j] > a[j+1]) {
                int b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
                changed = true;
            }
        }
        if (!changed) break;
    }
    return a;
}

void printArray(int* a)
{
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << "" << endl;
}
