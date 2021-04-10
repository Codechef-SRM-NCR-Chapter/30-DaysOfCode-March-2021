// Reverse a sentence using stack

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "This is a string";
    stack<string> a;
    string temp;
    int i,n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i] == ' ')
        {
            a.push(temp);
            temp="";
        }
        else
            temp+=s[i];
           
    }
    a.push(temp);
    
    while(!a.empty())
    {
        temp = a.top();
        cout<<temp<<" ";
        a.pop();
    }
    
    return 0;
}
