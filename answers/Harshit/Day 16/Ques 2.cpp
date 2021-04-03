#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the element: ";
    for(int i=0;i<size;i++){
         cin>>arr[i];
    }
       
    for(int i=0;i<size;i++){
        if(arr[i]==0 && arr[i+1]==1){
           cout<<i+1;
        }
        else{
            continue;
        }
    }
  return 0;
}
