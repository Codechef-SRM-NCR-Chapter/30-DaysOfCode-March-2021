#include <bits/stdc++.h>
using namespace std;

int moves(int arr[], int n)
{
    int min=0;
    for(int i=1; i<n; i++)
    {
        while(arr[i] < arr[i-1])
        {
            arr[i] = arr[i] + 1;
            min = min + 1;
        }
    }
    return min;
}

int main()
{
    int n, arr[n];
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements : ";    
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    //moves(arr);
    
    cout<<"Minimum number of moves required : "<<moves(arr, n);
    return 0;
}
