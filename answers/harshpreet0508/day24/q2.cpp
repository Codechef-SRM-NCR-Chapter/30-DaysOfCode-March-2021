// Given a string, generate all the possible strings from the characters

#include <bits/stdc++.h>
using namespace std;

int fun(int k)
{
    if(k==0 || k==1)
        return 1;
    else
        return k*fun(k-1);
}

void strings(string s,int l,int r)
{
    if (l == r)
        cout<<s<<'\n';
    else
    {
        for (int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            strings(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
 

int main()
{
    string s;
    cout<<"Enter string ";
    cin>>s;
    int n = s.length();
    cout<<fun(n)<<'\n';
    strings(s,0,n-1);
    return 0;
}
