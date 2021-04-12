// Reachable point from 0,0 in n moves moving only on x axis

#include <iostream>
using namespace std;

int main()
{
    int n,t;
    cout<<"Enter no of test cases ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter n ";
        cin>>n;
        cout<<"Reachable "<<n*(n+1);
    }

    return 0;
}
