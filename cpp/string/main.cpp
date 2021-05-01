#include <iostream>
#include <string>
using namespace std;

int main()
{
    char *str = "Hello!";
    char str2[512] = "Hello to you to!";
    cout << str << endl;
    cout << str2 << endl;

    string s;
    cout << s << endl;
    s = "Some text!";
    cout << s << endl;
    cout << s.at(9) << endl;

    string word;
    cout << "Enter the word: "; cin >> word;
    // s = s + word;
    s += word;
    cout << s << endl;
    cout << s.length() << endl;

    string abc;
    cout << abc << endl;
    abc = "ABC";
    abc.append("132");
    abc.insert(1, "123");
    abc.replace(0,3, "X00");
    cout << abc << endl;
    cout << abc.find("X") << endl;
    cout << abc.substr(3,5) << endl;

    return 0;
}
