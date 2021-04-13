#include <bits/stdc++.h>
using namespace std;
 
int solve(int arr[], int n)
{
    sort(arr, arr + n);
 
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            a = a*10 + arr[i];
        else
            b = b*10 + arr[i];
    }
 
    return a + b;
}
 
int main()
{
    int arr[100],n;
    cout<<"Enter a limit: ";
    cin>>n;
    cout<<"ENter the array: ";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    cout << "Sum = " << solve(arr, n);
    return 0;
}
