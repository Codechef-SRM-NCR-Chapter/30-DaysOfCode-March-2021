#include <bits/stdc++.h>
using namespace std;

int checkpalindrome(string str)
{
    int count[256]={0} ;
    for (int i = 0; str[i]; i++)
    {
        count[str[i]]++;
    }
    int n = 0;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] & 1)
            n++;

        if (n > 1)
            return 1;
    }
    return 0;
}

int main()
{
    char word[100];
    int n;
    cout<<"Enter the Word:\n ";
    cin>>word;
    n=checkpalindrome(word);
    if(n==0)
    cout<<"Yes";
    else
    cout<<"no";
    return 0;
}
