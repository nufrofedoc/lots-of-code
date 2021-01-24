#include <iostream>
#include <fstream>

using namespace std;

int getTheyWant();
void displayItems(int x);

int main()
{
    int whatTheyWant;
    whatTheyWant = getTheyWant();

    while(whatTheyWant!=4) {
        switch (whatTheyWant) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getTheyWant();
    }
}

int getTheyWant() {
    int choice;
    cout << "1 - All Items, which equals zero" << endl;
    cout << "2 - All Items, which greater zero" << endl;
    cout << "3 - All Items, which less zero" << endl;
    cout << "4 - Quit" << endl;

    cin >> choice;
    return choice;
}

void displayItems(int x) {

    ifstream objectFile("test.txt");
    string name;
    double power;

    if(x==1) {
        while(objectFile >> name >> power) {
            if(power==0) {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if(x==2) {
        while(objectFile >> name >> power) {
            if(power>0) {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if(x==3) {
        while(objectFile >> name >> power) {
            if(power<0) {
                cout << name << ' ' << power << endl;
            }
        }
    }
}
