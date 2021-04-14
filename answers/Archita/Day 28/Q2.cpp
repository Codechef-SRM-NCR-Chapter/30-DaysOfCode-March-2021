#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int arr[20],n,k,T;
    cout<<"Enter number of test cases\n";
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter n\n";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter number of peaks\n";
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1] && i>1 && i<n)
            cout<<arr[i];
        }
        if(i==n)
        cout<<"-1";
    }
    return 0;
}
