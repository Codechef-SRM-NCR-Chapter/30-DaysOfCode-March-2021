// check for valid parentheses

#include<bits/stdc++.h>
using namespace std;

bool balanced(string s)
{
    int n=s.length(),i;
    char x;
    stack<int>a;
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='[')
        {
            a.push(s[i]);
            continue;
        }
            
        if(a.empty())
            return false;
            
        switch(s[i])
        {
            case '}':
                x = a.top();
                a.pop();
                if(x=='('||x=='[')
                    return false;
                break;
                
            case ')':
            x = a.top();
            a.pop();
            if(x=='{'||x=='[')
                return false;
            break;
                
            case ']':
                x = a.top();
                a.pop();
                if(x=='('||x=='{')
                    return false;
                break;
        }
    }
    return (a.empty());
}

int main()
{
    string s;
    cout<<"Enter parentheses ";
    cin>>s;
    
    if(balanced(s))
        cout<<"\ntrue";
    else
        cout<<"\nfalse";
    

    return 0;
}
