#include <iostream>

using namespace std;

int main()
{
    int i,l,n,e,a[100],max=0;
    cout<<"Enter the number of children : ";
    cin>>n;
    cout<<"\nEnter the number of candies given to each child ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the number of extra candies : ";
    cin>>e;
    
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if (a[i] + e < max)
        {
            cout<<"FALSE ";
        }
        else
        {
            cout<<"TRUE ";
        }
    }

    return 0;
}
