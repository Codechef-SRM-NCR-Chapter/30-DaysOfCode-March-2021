// Find minimum no f moves to modify an array to non decreasing array

#include <iostream>
using namespace std;

int main()
{
    int n,min=0,i;
    
    cout<<"Enter n ";
    cin>>n;
    
    cout<<"Enter the array ";
    int a[n];       
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=1;i<n;i++)
    {
        while(a[i]<a[i-1])
        {
            a[i] = a[i] + 1;
            min = min + 1;
        }
    }
    
    cout<<"\nMin no of moves required "<<min;
        
    return 0;
}
