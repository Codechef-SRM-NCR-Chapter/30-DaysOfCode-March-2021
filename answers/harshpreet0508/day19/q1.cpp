// Given an array, find the missing and repeated numbers
// For eg: [1,3,3] -> 3 2 i.e. 3 is repeated and 2 is missing

#include <iostream>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"Enter n ";
    cin>>n;
    
    int a[n];
    cout<<"Enter Array ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"\nRepeated Numbers ";
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            cout<<a[i]<<" ";
    }
    
    cout<<"\nMissing Numbers ";
    for(i=0;i<=n;i++)
    {
        if(a[i]!=i+1)
            cout<<i+1<<' ';
    }

    return 0;
}
