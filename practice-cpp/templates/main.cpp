#include <iostream>
#include <vector>
using namespace std;

// template <class T>
// class cSum
// {
//     T value;
// public:
//     cSum(T first, T second)
//     {
//         value = first + second;
//     }
//     T Result() { return value; }
// };

int main()
{
    // cSum<int> sum1(1, 4);
    // cout << sum1.Result() << endl;
    // cSum<float> sum2(1.2, 4.4);
    // cout << sum2.Result() << endl;

    vector<int> vector1;
    int temp;
    // vector1.clear();

    do
    {
        cout << "Insert element (-1) to cancel:";
        cin >> temp;
        vector1.push_back(temp);
    } while (temp != -1);
    vector1.pop_back();
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << endl;
    }

    getchar();
    getchar();
    getchar();
    return 0;
}
