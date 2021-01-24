#include <iostream>
using namespace std;

int linearSearch(int arr[], int item, int sizeOfArray);
int binarySearch(int arr[], int item, int sizeOfArray, int start, int finish);

int main()
{
    int item = 1303;
    int arr[10] = {23, 351, 481, 523, 783, 833, 901, 1024, 1303, 1590};
    int sizeOfArray = sizeof(arr) / 4;

    cout << "Linear Search: " << endl;
    cout << "Founded Item: " << linearSearch(arr, item, sizeOfArray) << endl;
    cout << "--------------" << endl;
    cout << "Binary Search: " << endl;
    cout << "Founded Item: " << binarySearch(arr, item, sizeOfArray, 0, 0) << endl;

    return 0;
}

int linearSearch(int arr[], int item, int sizeOfArray)
{
    int i;
    for (i = 0; i < sizeOfArray; i++) {
        if (arr[i] == item)
            return i;
    }

    return false;
}

int binarySearch(int arr[], int item, int sizeOfArray, int start = 0, int finish = 0)
{
    int i;

    if (finish == 0)
        finish = sizeOfArray - 1;

    if (start > finish)
        return false;

    int middle = (start + finish) / 2;

    for (i = 0; i <= finish; i++) {
        if (arr[middle] == item) {
            return middle;
        } else if (arr[middle] < item) {
            start = middle + 1;
        } else {
            finish = middle - 1;
        }
        return binarySearch(arr, item, sizeOfArray, start, finish);
    }

    return false;
}
