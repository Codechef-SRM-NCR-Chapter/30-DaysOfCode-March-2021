//Given a no check whether it can be represented as sum of 2020 and 2021

#include <iostream>
using namespace std;

bool sum(int n)
{
    while(n>=2020)
    {
        if(n%2021==0)
            n=0;
            
        if(n%2020==0)
            n=0;
        
        else
        {
            if(n>=2021)
                n=n-2021;
            if(n>=2020)
                n=n-2020;
        }
    }
        
    if(n==0)
        return true;
    
    return false;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(sum(n))
             cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
