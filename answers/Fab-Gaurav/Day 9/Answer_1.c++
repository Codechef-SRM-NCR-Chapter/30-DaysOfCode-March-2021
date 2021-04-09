#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[n], target;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the target element : ";
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+ arr[j]==target){
                cout<<"The index of the elements are : ["<<i<<", "<<j<<"]";
            }
        }
    }
    return 0;
}
