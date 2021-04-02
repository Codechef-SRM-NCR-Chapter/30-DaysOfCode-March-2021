#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int n=0;
    cin>>size;
    int arr[size];
     cout<<"Enter the element: ";
    for(int i=0;i<size;i++){
     cin>>arr[i];
    }
   
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            n=n+1;
        }
        else{
            break;
        }
    }
   cout<<n;
    return 0;
}
