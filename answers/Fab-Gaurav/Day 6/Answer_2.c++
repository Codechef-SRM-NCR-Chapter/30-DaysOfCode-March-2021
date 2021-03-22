#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"Enter no of elemets of array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j += 2) { 
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
        }
    }
    cout<<"Sum is : "<<sum;
    return 0;
}