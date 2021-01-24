#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    int num, numrand;
    char yn;
    string name;

    srand(time(NULL)); // important

    cout << "Welcome and please enter your name: ";
    cin >> name;

    while (true) {
        cout << "Hello " << name << " do you want to play a game (y/n): ";
        cin >> yn;

        if (yn == 'n' || yn == 'N')
            return 0;
        if (yn == 'y' || yn == 'Y')
            break;
    }

    while (true) {
        cout << "Computer will imagine one number from 0 to 5 and you should guess it: ";
        cin >> num;
        numrand = rand() % 6; // generates a number from 0 to 5

        if (numrand == num)
            cout << "You win!" << endl;
        else if (num == -1)
            break;
        else
            cout << "You lose! The computer " << numrand << endl;
    }

    return 0;
}
