#include<bits/stdc++.h>
using namespace std;

int palindrome(int arr[], int begin, int end){
    if (begin >= end){
        return 1;
    }
    if (arr[begin] == arr[end]){
        return palindrome(arr, begin + 1, end - 1);
    }
    else{
        return 0;
    }
}

int main(){
    int a[50],x;
    cout<<"Enter the number of elements in array : ";
    cin>>x;
    cout<<"Enter the elements of array : ";
    for(int i=1; i<x; i++){
        cin>>a[x];
    }
    
    int n = sizeof(a) / sizeof(a[0]);
    
    if (palindrome(a, 0, n - 1) == 1)
        cout << "PALINDROME";
    else
        cout << "NOT PALINDROME";
    return 0;
}