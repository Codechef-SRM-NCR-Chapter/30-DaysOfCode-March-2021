// Given an array and extra candies 
// find out if the kid has the greatest of all 
// if we gets the extra candies.

#include <iostream>
using namespace std;

int max(int a[])
{
    int i,m=0;
    for(i=0;i<5;i++)
    {
        if(a[i] > m) 
            m = a[i];
    }
    return m;
}

int main()
{
    int n=5,e,c=0,i;
    int a1[5];
    string a2[5];
    
    cout<<"Enter array ";
    for(int i=0;i<5;i++)
        cin>>a1[i];
        
    cout<<"Extra candies ";
    cin>>e;
    c = max(a1);
    
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if((a1[i] + e) < c) 
            a2[i] = "FALSE";
            
        else 
            a2[i] = "TRUE";
    }
    
    for(i=0;i<5;i++)
    {
        if(i == 0)
            cout<<'['<<a2[i]<<',';
        else if(i == 4)
            cout<<a2[i]<<']';
        else
            cout<<a2[i]<<',';
    }
    
    return 0;
}
