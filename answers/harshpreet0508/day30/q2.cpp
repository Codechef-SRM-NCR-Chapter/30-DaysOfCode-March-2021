// Given a string of digits, find the string that represents 
// lucky no(4/7) and occurs a substring max no of times. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        string s;
        cout<<"\n";
        cin>>s;
    
        int n=s.length();
        int c4=0,c7=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='4')
                c4++;
            if(s[i]=='7')
                c7++;
        }
        if(c4==0 && c7==0)
            cout<<"-1";
            
        else if(c4>=c7)
            cout<<'4';
        else
            cout<<'7';
        
    
    }
    return 0;
}
