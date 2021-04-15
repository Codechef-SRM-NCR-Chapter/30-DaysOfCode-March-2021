#include <iostream>
using namespace std;

int main() 
{
    int arr[20],n,r,l,i;
    cout<<"Enter the number of integers in array\n";
    cin>>n;
    cout<<"Enter number of rotations\n";
    cin>>r;
    cout<<"number of queries\n";
    cin>>l;
    cout<<"Enter elements of array\n";
    for(int x=0;x<n;x++)
    {
        cin>>arr[x];
    }
    for(int j=0;j<r;j++)
    {
        int a=arr[n-1];
        for(int q=n-1;q>0;q--)
            arr[q]=arr[q-1];
            arr[0]=a;
    }
    for(int j=0;j<l;j++)
    {
        cin>>i;
        cout<<arr[i];
    }
    return 0;
}
