#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, n, rev[size], arr[size];
    cout<<"Enter the total number of element : ";
    cin>>size;
    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the position from where reverse has to be done : ";
    cin>>n;

    for(int i=0; i<size; i++){
        if(i<n){
           rev[i]=arr[n-(1+i)];
        }
        else{ rev[i]=arr[i];}
    }
    
    cout<<"After reversing : ";
    for(int i=0; i<size; i++){
        cout<<rev[i]<<", ";
    }
    return 0;
}
