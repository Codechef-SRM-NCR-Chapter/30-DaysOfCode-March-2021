#include <iostream>
using namespace std;
int indexof1(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            return i;
            break;
        }
    }
    if(i==n)
    return n;
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of binary array (sorted in decresing order)\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i = indexof1(arr,n);
    if(i==n)
    cout<<"No 1 is there";
    else
    cout<<"Index of 1 is "<<i;
    return 0;
}
    