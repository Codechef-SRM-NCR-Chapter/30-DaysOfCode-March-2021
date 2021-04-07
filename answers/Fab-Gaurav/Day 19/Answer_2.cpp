#include <bits/stdc++.h>
using namespace std;

int cntTriplet(int arr[], int n, int sum)
{
    int ans=0;
    for(int i=0; i<n - 2; i++){
       for (int j = i+1; j < n-1; j++){
           for (int k = j+1; k < n; k++){
               if (arr[i] + arr[j] + arr[k] < sum){
                   ans++;
               }
           }
       }
    }
    return ans;
}

int main()
{
    int n, arr[n], sum;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements in the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the Sum : ";
    cin>>sum;
    
    cout<<"The number of triplets : ";
    cout<<cntTriplet(arr, n, sum);

    return 0;
}
