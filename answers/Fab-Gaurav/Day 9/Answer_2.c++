#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return a>b ? a:b ;
}

int main(){
    int n;
    cout<<"Enter the elements of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_sum=arr[0], sum=arr[0];
    for(int i=1; i<n; i++){
        sum = max(arr[i], sum+arr[i]);
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    cout<<"The maximum sum for the array is : "<<max_sum;
    return 0;
}
