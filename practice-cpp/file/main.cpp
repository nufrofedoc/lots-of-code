#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writer("file1.txt");
    if (writer.is_open())
    {
        int birds = 10;
        // writer << "Some text" << endl;
        // writer << "Some more text" << endl;
        // writer << "There are: " << birds << " birds" << endl;
        writer << 10 << " " <<  20 << endl;

        cout << "Writing was success!" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    writer.close();

    // Reader
    ifstream reader("file1.txt");
    int a,b;
    if(reader.is_open())
    {
        reader >> a;
        reader >> b;

        cout << "Sum of variables a and b is " << a + b << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    reader.close();

    return 0;
}
