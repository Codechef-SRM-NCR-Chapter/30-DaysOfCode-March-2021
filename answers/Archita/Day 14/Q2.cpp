#include <iostream>
using namespace std;

void add(int arr1[],int arr2[],int arr3[],int m,int n,int l,int i)
{
    if(i<l)
    {
        while(i<m && i<n)
        {
            arr3[i]=arr1[i]+arr2[i];
            i++;
            add(arr1,arr2,arr3,m,n,l,i);
        }
        if(i<m)
        {
            arr3[i]=arr2[i];
            i++;
            add(arr1,arr2,arr3,m,n,l,i);
        }
        else if(i<n)
        {
            arr3[i]=arr1[i];
            i++;
            add(arr1,arr2,arr3,m,n,l,i);
        }
    }
}
int main() 
{
    int arr1[10],arr2[10],arr3[10],m,n,l,i=0;
    cout<<"Enter the size of array 1\n";
    cin>>n;
    cout<<"Enter the size of array 2\n";
    cin>>m;
    l=m;
    if(l<n)
    l=n;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    i=0;
    add(arr1,arr2,arr3,m,n,l,i);
    for(i=0;i<l;i++)
    {
        cout<<arr3[i];
    }
    return 0;
}
