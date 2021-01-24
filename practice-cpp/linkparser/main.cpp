#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include <string>
#include <array>
#include <regex>
#include <cctype>

using namespace std;

string* setHosts(string* listOfHosts, int sizeOfArray);
void getHosts(string* listOfHosts, int sizeOfArray);
string* getNameOfSites(string* names, string* hosts, int sizeOfArray);
string* setTextLink(string* textLink, int sizeOfArray);
void printLinks(string* hosts, string* names, int linkCount);

int main()
{
    int i, j;
    int linkCount;

    cout << "Enter a number of links do you want to created: " << endl;
    cin >> linkCount;

    string listOfHosts[linkCount] = {};
    string* hosts = setHosts(listOfHosts, linkCount);

    string siteNames[linkCount] = {};
    string* names = getNameOfSites(siteNames, hosts, linkCount);

    //string textLinks[linkCount] = {};
    //string* textLink = setTextLink(textLinks, linkCount);

    //cout << "Enter text of link: " << endl;
    //textLink = setTextLink(textLink);

    cout << "----------------------" << endl;

    printLinks(hosts, names, linkCount);
}

string* setHosts(string* listOfHosts, int sizeOfArray)
{
    string host;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter address of site: " << endl;
        cin >> host;

        listOfHosts[i] = host;
    }

    return listOfHosts;
}

void printHosts(string* listOfHosts, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << listOfHosts[i] << endl;
    }
}

string* setTextLink(string* textLink, int sizeOfArray)
{
    string text;

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter text of site: " << endl;
        cin >> text;

        textLink[i] = text;
    }

    return textLink;
}

string* getNameOfSites(string* names, string* hosts, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        string str = regex_replace(hosts[i], regex(".[^.]*$"), "");
        str[0] = toupper(str[0]);
        names[i] = str;
    }

    return names;
}

void printLinks(string* hosts, string* names, int linkCount)
{
    int i = 0;
    string linkStart = "<a ";
    string linkEnd = "</a>";
    string hrefStart = "href=\"http://";
    string hrefEnd = "\">";

    while (!(linkCount == 0))
    {
        cout << linkStart << hrefStart << hosts[i] << hrefEnd << names[i] << linkEnd << endl;

        i++;
        linkCount--;
    }
}
