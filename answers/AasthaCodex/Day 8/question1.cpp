#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr + n);
 
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] != arr[i+1])
            sum = sum + arr[i];
    }
 
    cout<<sum;
    return 0;
}
