#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int randNum1, randNum2;
    int userTotal, computerTotal;

    //get the system time
    int seed = time(0);

    //seed into random number generator
    srand(seed);

    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;

    computerTotal = randNum1 + randNum2;

    cout << setw(5) << randNum1 << endl;
    cout << setw(3) << "+" << randNum2 << endl;
    cout << "----\n";
    cin >> userTotal;

    if (userTotal == computerTotal)
        cout << "\nGreat Job!\n";
    else
        cout << "\nSorry, wrong answer. Correct answer is " << computerTotal << endl;

    return 0;
}
