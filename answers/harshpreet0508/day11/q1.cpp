// Check if the entered string is anagram and in turn palindrome

#include <iostream>
using namespace std;

#define n 256
 

bool ap(string str)
{
    int count[n] = { 0 };

    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 
    
    int odd = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    
    return true;
}
 

int main()
{
    string str;
    cin>>str;
    ap(str) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
