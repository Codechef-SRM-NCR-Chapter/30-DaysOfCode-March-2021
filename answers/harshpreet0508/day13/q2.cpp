// Check if the array is palindrome or not using recursion

#include <iostream>
using namespace std;

int p(int a[],int b,int e)
{
    if(b>=e)
        return 1;
    if(a[b]==a[e])
        return p(a,b+1,e-1);
    else
        return 0;
}

int main()
{
    int a[10],n,b=0,i;
    
    cout<<"Enter no of elements ";
    cin>>n;
    
    cout<<"Enter the array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
    if(p(a,b,n-1))
        cout<<"\nPALINDROME";
    else
        cout<<"\nNOT PALINDROME";

    return 0;
}
