#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int L, int R){
    if (R >= L){
        int mid = L + (R - L)/2;
        if ( (mid == R || arr[mid+1] == 0) && (arr[mid] == 1)){
            return mid+1;
        }

        if (arr[mid] == 1){
            return count(arr, (mid + 1), R);
        }
        return count(arr, L, (mid -1));
    }
    return 0;
}

int main(){
    int size, arr[size], numOfOnes;
    cout<<"Enter size of array  : ";
    cin>>size;
    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    numOfOnes = count(arr, 0, size-1);
    cout<<"Total number's of 1's : ";
    if(numOfOnes==0){
        cout<<"No 1"<<endl;
    }
    else{
        cout<<numOfOnes<<endl;
    }
    cout<<endl;
    return 0;
}