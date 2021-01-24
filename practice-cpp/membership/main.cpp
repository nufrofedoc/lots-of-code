#include <iostream>

using namespace std;

int main()
{
    const float INCREASE = 0.04;
    const int YEARS = 6;
    float membership = 2500;

    for (int i = 1; i <= YEARS; i++)
    {
        membership = membership + (membership * INCREASE);
        cout << "Year " << i << " fees are: $" << membership << endl;
    }

    return 0;
}
