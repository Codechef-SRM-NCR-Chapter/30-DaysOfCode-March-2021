
#include <bits/stdc++.h>
using namespace std;
int countMe(string &word, string &check);
int main()
{
    string word;
    getline(cin, word);
    string check;
    getline(cin, check);
    cout << countMe(word, check);
    return 0;
}
int countMe(string &word, string &check)
{
    int len1 = check.length();
    int len2 = word.length();
    int sum = 0;

    for (int i = 0; i <= len2 - len1; i++)
    {

        int j;
        for (j = 0; j < len1; j++)
            if (check[i + j] != word[j])
                break;

        if (j == len1)
        {
            sum = sum + 1;
            j = 0;
        }
    }
    return sum;
}


