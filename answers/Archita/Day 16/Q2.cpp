#include <iostream>
using namespace std;
int indexof1(int arr[],int n)
{
    int i;
    i=n/2;
    while(i<n)
    {
        if(arr[i]==0)
        i++;
        else if(arr[i]==1)
        {
            if(arr[i-1]==0 && arr[i]==1)
            {
                return i;
                break;
            }
            else
            i--;
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
    cout<<"Enter the elements of binary array\n";
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
    