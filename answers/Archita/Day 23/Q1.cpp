#include<bits/stdc++.h>
using namespace std;
 
void reverse(string s)
{
    stack<string> stc;
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            stc.push(temp);
            temp="";         
        }
        else
        {
            temp=temp+s[i];
        }
    }
    stc.push(temp);
    while(!stc.empty()) 
    {
        temp=stc.top();
        cout<<temp<<" ";
        stc.pop();
    }
}
int main()
{
    int top=-1;
    char str[20],stack[20];
    cout<<"Enter String";
    cin.getline(str,20);
    reverse(str);
    return 0;
}