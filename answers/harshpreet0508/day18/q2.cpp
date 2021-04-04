// Given an array, sort in decending order of set bits
#include<bits/stdc++.h>
using namespace std;

int sbc(int n)
{
    int c=0;
    while(n)
    {
        if(n & 1 == 1)
            c++;
        n = n>>1;
    }
    return c;
}

int func(int n1,int n2) 
{
    int c1 = sbc(n1);
    int c2 = sbc(n2);
    
    if(c1<=c2)
        return 0;
    return 1;
}

int main()
{
    int n,i;
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n,func);
    
    cout<<"\nDescending order of set bits ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
