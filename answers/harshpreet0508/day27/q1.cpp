// Perform k right rotations and output the values on indexes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t;
    cout<<"Enter n,k,t ";
    cin>>n>>k>>t;
    
    int a[n],i;
    
    cout<<"Enter array ";
    for(i=0;i<n;i++)
        cin>>a[i];
        
    int j,temp=0,q;
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
            a[j]=a[j-1];
        a[0]=temp;
    }
    
    while(t--)
    {
        cout<<"\nEnter index ";
        cin>>q;
        cout<<a[q];
    }
        
    return 0;
}
