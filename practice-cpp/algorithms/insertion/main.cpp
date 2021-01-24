#include <iostream>
using namespace std;

int* insertionSort(int* a, int N);
void printArray(int* a, int N);

int main()
{
    int a[7] = {35, 3, 38, 18, 15, 55, 1};

    cout << "Before a sorting" << endl;
    printArray(a, 7);

    cout << "After a sorting" << endl;
    insertionSort(a, 7);
    printArray(a, 7);

    return 0;
}

int* insertionSort(int* a, int N)
{
    int x;

    for (int i = 1; i < N; i++) {
        x = a[i];
        int j = i - 1;
        while (x < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

void printArray(int* a, int N)
{
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << "" << endl;
}
