#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,arr[10],n,good_triplet=0;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the Elements of array : ";
    for(int m=0;m<n;m++){
       cin>>arr[m]; 
    }
    cout<<"Enter the values of a : ";
    cin>>A;
    cout<<"Enter the values of b : ";
    cin>>B;
    cout<<"Enter the values of c : ";
    cin>>C;
    for(int i=0;i<(n);i++){
        for(int j=(i+1);j<(n-1);j++){
            if((arr[i]-arr[j])<=A);{
                for(int k=(j+1);j<(n-2);j++){
                    if(((arr[j]-arr[k])<=B)&&((arr[i]-arr[k])<=C))
                    good_triplet++;
                }
            }
        }
    }
    cout<<"The number of Good Triplets is : "<<good_triplet;
    return 0;
}
