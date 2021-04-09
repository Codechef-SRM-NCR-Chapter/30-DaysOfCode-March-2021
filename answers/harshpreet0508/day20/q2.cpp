// Given a number, remove consecutive repeated digits from it using stack

#include<bits/stdc++.h>
using namespace std;

string func(string s)
{
    int i=0;
    stack<char>a; 
    
    while(i < s.length())
    {
        if(a.empty() || s[i] != a.top()) 
        {
            a.push(s[i]); 
            i++;
        }
        
        else
        {
            a.pop();
            i++;
        }
    }
    
    if(!a.empty())
    {
        string s1;
        while(!a.empty())
        {
            s1 = a.top() + s1;
            a.pop();
        }
      return s1;
    }
        
    else
        return "Empty string";
}

int main()
{
    string s;
    cout<<"Enter a number ";
    cin>>s;
    
    cout<<"\nNumber without consecutive repeat is "<<func(s);
    return 0;
}
