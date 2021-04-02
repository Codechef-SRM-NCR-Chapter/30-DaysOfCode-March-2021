#include <iostream>
using namespace std;
int indexof1(int arr[],int l,int n)
{
    int mid;
    mid=l+(n-l)/2;
    while(l<n)
    {
        if(arr[mid]==0)
        {
            if(arr[mid+1]==1)
            {
                return mid+1;
                break;
            }
            else
            {
                l=mid+1;
                indexof1(arr,l,n);
                break;
            }
        }
        else if(arr[mid]==1)
        {
            if(arr[mid-1]==0)
            {
                return mid;
                break;
            }
            else
            {
                n=mid-1;
                indexof1(arr,l,n);
                break;
            }
        }
    }
    if(l==n)
    return n;
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of binary array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i = indexof1(arr,0,n);
    if(i==n)
    cout<<"No 1 is there";
    else
    cout<<"Index of 1 is "<<i;
    return 0;
}
    