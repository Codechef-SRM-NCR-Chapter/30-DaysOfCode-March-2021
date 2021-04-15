//Given a no check whether it can be represented as sum of 2020 and 2021

#include <iostream>
using namespace std;

bool sum(int n)
{
    if(n==0)
        return true;
    
    if(n%2021==0||n%2020==0)
        return true;
        
    if(n-2021==2020||n-2020==2021)
        return true;
    
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    if(sum(n))
        cout<<"Yes ";
    else
        cout<<"No ";

    return 0;
}
