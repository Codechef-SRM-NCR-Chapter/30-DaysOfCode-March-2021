#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[10],n,candies=0,i,extra_candies;
    cout<<"Enter the number of students : ";
    cin>>n;
    cout<<"Enter the no. of candies each student got : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    i=0;
    candies=arr[i];
    for(i=1; i<n; i++){
        if(arr[i]>candies)
        candies=arr[i];
    }
    cout<<"Largest number of candies is : "<<candies<<endl;
    cout<<"Enter the Extra candies left : ";
    cin>>extra_candies;
    for(i=0; i<n; i++){
        if((extra_candies+arr[i])>=candies)
        cout<<"True, ";
        else
        cout<<"False, ";
    }
	return 0;
}