#include <bits/stdc++.h>
using namespace std;

int sum(int a[],int b[],int n,int i,int sm[]){
    if(i<n){
    sm[i]=a[i]+b[i];
    sum(a,b,n,i+1,sm);
    }
    else
    return 1;
    return 0;
}
int main(){
    int n,i;
    cout<<"Enter the size of  array: ";
    cin>>n;
    int a[n];
    int b[n];
    int sm[n];
    for(int j=0;j<n;j++){
        cout<<"Enter elements of first array: ";
         cin>>a[j];
    }
    for(i=0;i<n;i++){
        cout<<"Enter elements of second array: ";
        cin>>b[i];
    }
    sum(a,b,n,0,sm);
    cout<<endl;
    for(int p=0;p<n;p++)
        cout<<sm[p]<<", ";
    
return 0;
}
