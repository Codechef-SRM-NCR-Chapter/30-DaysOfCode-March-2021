// Given two sorted arrays a,b and integer x determine 
// whether b can rearrange so that a[i] + b[j] < x

#include <iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter t ";
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cout<<"\nEnter n,x "; 
        cin>>n>>x;
        
        int i,j,c=0;
        
        int a[n],b[n];
        
        cout<<"Enter 1st array ";
        for(i=0;i<n;i++)
            cin>>a[i];
        
        cout<<"Enter 2nd array ";
        for(j=0;j<n;j++)
            cin>>b[j];
            
        for(i=0;i<n;i++)
        {
            if(a[i] + b[n-i-1] > x)
                c++;              
        }
        
        if(c==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}
