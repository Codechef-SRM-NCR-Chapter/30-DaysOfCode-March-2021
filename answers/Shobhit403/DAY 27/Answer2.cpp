#include <bits/stdc++.h>
using namespace std;
int countChar(string str, char x)
{
    int count = 0, n = 10;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == x)
            count++;
    int repititions = n / str.size();
    count = count * repititions;
    for (int i = 0; i < n % str.size(); i++) 
    {
        if (str[i] == x)
            count++;
    }
    return count;
}
int main()
{
    string str = "abcac";
    cout << countChar(str, 'a');
    return 0;
}
