#include<bits/stdc++.h>
using namespace std;
int countTriplets(int arr[], int n, int sum)
{
    int ans = 0;
    for (int i = 0; i < n-2; i++)
    {
       for (int j = i+1; j < n-1; j++)
       {
           for (int k = j+1; k < n; k++)
               if (arr[i] + arr[j] + arr[k] < sum)
                   ans++;
       }
    }
    return ans;
}
int main()
{
    int arr[] = {-2, 0, 1, 3};
    int n = sizeof arr / sizeof arr[0];
    int sum = 2;
    cout << countTriplets(arr, n, sum) << endl;
    return 0;
}
