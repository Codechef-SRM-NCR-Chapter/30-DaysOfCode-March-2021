// Given an array of digits(0-9) find the minimum possible sum 
// of two numbers formed from the digits in the array itself.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],n,x=0,y=0,i;
    
    cout<<"Enter n ";
    cin>>n;
    
    cout<<"Enter array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    for(i=0;i<n;i++)
    {
        if(i % 2 == 0)
            x = x * 10 + a[i];
        else
            y = y * 10 + a[i];
    }
    
    cout<<"\nMinimum Possible Sum "<<"is "<< x + y<<" formed by "<<x<<" and "<<y;
    
    return 0;
}
