// Find the occurrences of given character in the infinite repeated string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string ";
    cin>>s;
    
    int l;
    cout<<"Enter no of characters ";
    cin>>l;
    
    char c;
    cout<<"Enter character ";
    cin>>c;
    
    int n = s.length(),count=0,i;
    for(i=0;i<n;i++)
    {
        if(s[i]==c)
            count++;
    }
    
    int r = l/n;
    count*=r;
    
    for(i=0;i<l%n;i++)
    {
        if(s[i]==c)
            count++;
    }

    cout<<"\n"<<c<<" occurs "<<count<<" times ";
    
    return 0;
}
