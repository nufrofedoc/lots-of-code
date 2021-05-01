#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Function Sum is executing" << endl;
    int c;
    c = a + b;
    return c;
}

void welcomeMessage()
{
    cout << "Welcome to our program!" << endl;
}

void startProgram(string filename)
{
    ShellExecute(NULL, "open", filename.c_str(),NULL,NULL,SW_SHOWNORMAL);
}

int main()
{
    welcomeMessage();

    int x,y;
    cin >> x;
    cin >> y;

    cout << sum(x, y) << endl;

    startProgram("mspaint");

    return 0;
}
