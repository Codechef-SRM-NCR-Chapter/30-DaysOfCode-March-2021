#include <iostream>

using namespace std;
void add(int arr1[],int arr2[],int m,int c[])
{
    if(m>=0)
    {
        c[m]=arr1[m]+arr2[m];
        cout<<c[m]<<" ";
        add(arr1,arr2,m - 1,c);
    }
    
}

int main()
{
    int m;
    cout<<"Enter the size of arrays:" ;
    cin>>m;
    int arr1[m];
    int c[m]={0};
    cout<<"Enter the elements of the array 1: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    
    int arr2[m];
    cout<<"Enter the elements of the array 2: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    add(arr1,arr2,m,c);
    return 0;
}
