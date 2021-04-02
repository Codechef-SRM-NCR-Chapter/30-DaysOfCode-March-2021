#include <iostream>
using namespace std;
int noof1(int arr[],int n)
{
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        ctr++;
    }
    return ctr;
}
int main()
{
    int arr[20],n,ctr;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of binary array (sorted in decresing order)\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ctr = noof1(arr,n);
    cout<<"Number of 1 is "<<ctr;
    return 0;
}
    