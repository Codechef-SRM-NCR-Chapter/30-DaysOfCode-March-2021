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
    int arr[] = {6, 8, 4, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << solve(arr, n);
    return 0;
}
