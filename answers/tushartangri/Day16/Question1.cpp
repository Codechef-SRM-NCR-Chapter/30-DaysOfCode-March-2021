#include <iostream>
using namespace std;
int noof1(int arr[],int l,int n)
{
    if (n >= l)
    {
        int mid = l + (n - l)/2;
        
        if ((mid == n || arr[mid+1] == 0) && (arr[mid] == 1))
        {
            return mid+1;
        }
        if (arr[mid] == 1)
        {
            return noof1(arr, (mid + 1), n);
        }
        
        return noof1(arr, l, (mid -1));
    }
    
    return 0;
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of binary array (sorted in decreasing order)\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i = noof1(arr,0,n-1);
    cout<<"No. of 1 is "<<i;
    return 0;
}
