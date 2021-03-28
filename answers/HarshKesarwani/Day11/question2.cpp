#include <iostream>
#include <string>
using namespace std;

int isPatternPresent(string str, string st)
{
    int count;
    int l1 = str.length();
    int l2 = st.length();
    for (int x = 0; x < l1 - l2; x++)
    {
        int y;
        for (y = 0; y < l2; y++)
        {
            if (str[x + y] != st[y])
            {
                break;
            }
        }
        if (y == l2)
        {
            count++;
            y = 0;
        }
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    int k;
    cout << "Enter value of k" << endl;
    cin >> k;
    string st[k];
    for (int x = 0; x < k; x++)
    {
        cout << "Enter pattern " << x + 1 << endl;
        cin >> st[x];
    }

    for (int x = 0; x < k; x++)
    {
        cout << isPatternPresent(str, st[x]) << endl;
    }
}
