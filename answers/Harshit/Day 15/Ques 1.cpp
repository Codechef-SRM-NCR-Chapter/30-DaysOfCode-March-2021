#include <iostream>
#include <string>
using namespace std;

string reverse(string str, string rev, int i, int j)
{
    if (j < str.length())
    {
        if (str[j] != ' ')
        {
            j = j + 1;
            return reverse(str, rev, i, j);
        }

        else
        {
            rev = str.substr(i, j - i) + " " + rev;
            j= j + 1;
            i = j;
            return reverse(str, rev, i, j);
        }
    }

    else
    {
        rev = str.substr(i, j - i) + " " + rev;
        return rev;
    }
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);
    cout << reverse(s, "", 0, 0);
    return 0;
}
