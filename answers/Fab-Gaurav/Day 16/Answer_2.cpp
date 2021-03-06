#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int initial, int last){
    while (initial <= last){
        int mid = (initial + last) / 2;        
        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)){
            return mid;

        }
        else if (arr[mid] == 1){
            last = mid - 1;

        }
        else{
            initial = mid + 1;

        }
    }
    return -1;
}

int main(){
    int size, arr[size], tran_pnts;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    tran_pnts = search(arr, 0, size-1);
    cout<<"Transition points are : ";
    if(tran_pnts==-1){
        cout<<"No 1";
    }
    else{
        cout<<tran_pnts;
    }
    return 0;
}