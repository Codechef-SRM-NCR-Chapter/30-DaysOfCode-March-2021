#include <bits/stdc++.h>
using namespace std;

bool palindromeornot(string str)
{
    int count[256]={0} ;
    for (int i = 0; str[i]; i++)
    {
        count[str[i]]++;
    }
    int odd = 0;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    return true;
}

int main()
{
    char word[100];
    cout<<"Enter the Word: ";
    cin>>word;
    palindromeornot(word)? cout << "Yes\n": cout << "No\n";
  
