#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hh, mm, ss;
    string format;
    string delimiter = ":";
    size_t pos = 0;
    size_t pos_zero = 0;
    string token;
    // CHANGE ME
    string am_format[] = {"00","01","02","03","04","05","06","07","08","09","10","11"};
    string pm_format[] = {"12","13","14","15","16","17","18","19","20","21","22","23"};
    // CHANGE ME
    string output_time = "";

    int i = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);

        if (i == 0) {
            if (s.find("PM") != std::string::npos) {
                    if (stoi(token) == 12) {
                        output_time += pm_format[0] + ":";
                    } else {
                        output_time += pm_format[stoi(token)] + ":";
                    }
            } else {
                if ((pos_zero = token.find("0")) != std::string::npos) {
                    token.erase(0, pos_zero+delimiter.length());

                    output_time += am_format[stoi(token)] + ":";
                } else {
                    if (stoi(token) == 12) {
                        output_time += am_format[0] + ":";

                    } else {
                        output_time += am_format[stoi(token)] + ":";

                    }
                }
            }
        } else {
            output_time += token + ":";
        }

        s.erase(0, pos + delimiter.length());
        i++;
    }

    while ((pos = s.find("PM")) != std::string::npos ||
    (pos = s.find("AM")) != std::string::npos) {
        token = s.substr(0, pos);
        output_time += token;
        s.erase(0, pos + delimiter.length());
    }

    return output_time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
