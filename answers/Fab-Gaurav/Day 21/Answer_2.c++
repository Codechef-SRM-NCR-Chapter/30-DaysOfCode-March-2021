#include <bits/stdc++.h>
using namespace std;

int cal(int arr[], int n)
{
    sort(arr, arr+n);
    int a=0, b=0;
    for (int i=0; i<n; i++){
        if (i & 1)
            a=a*10 + arr[i];
        else
            b=b*10 + arr[i];
    }
    return a + b;
}

int main()
{
    int n, arr[20];
    cout<<"Enter the number of element in the array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum possible sum : "<<cal(arr, n);
    return 0;
}
