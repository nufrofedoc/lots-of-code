#include <iostream>
using namespace std;

int* selectionSort(int* a, int N);
void printArray(int* a, int N);

int main()
{
    int a[5] = {3, 51, 12, 77, 1};

    cout << "Before a sorting" << endl;
    printArray(a, 5);

    cout << "After a sorting" << endl;
    selectionSort(a, 5);
    printArray(a, 5);

    return 0;
}

int * selectionSort(int* a, int N)
{
    int k;
    int x;

    for (int i = 0; i < N; i++) {
        k = i;
        x = a[i];
        for (int j = i+1; j < N; j++) {
            if (a[j] < x) {
                k = j;
                x = a[j];
            }
        }
        a[k] = a[i];
        a[i] = x;
    }

    return a;
}

void printArray(int* a, int N)
{
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << "" << endl;
}
