#include <iostream>
using namespace std;

int main() 
{
    int t,num;
    cout<<"Enter the number of test cases\n";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        if((2021 +2021)==num || (2020 +2021)==num || (2020 +2020)==num )
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}