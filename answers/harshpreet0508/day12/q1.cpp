// Given a string of n characters to process m operations
// 1 k x change k character to x
// 2 a b check the substring is palindrome or not

#include <iostream>
#include<string>
using namespace std;

int isPalindrome(string str)
{
    int l = 0;
    int h = str.length();

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,b,n,m,c1;
    char c;
    string s,s1;
    cin>>n>>m;
    cin>>s;
    while(m--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c;
            s[b]='x';
            cout<<s<<"\n";
        }
        if(a==2)
        {
            cin>>b>>c;
            c1=int(c);
            for(int i=b;i<=c;i++)
            {
               s1=s[i]; 
            }
        if(isPalindrome(s1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
        }
    }
    return 0;
}
