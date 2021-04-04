#include<iostream>
using namespace std;


int add_arrays(int arr1[], int arr2[], int n){
	
	int sum[100];
	for(int i=0;i<n;i++){
		sum[i] = arr1[i] + arr2[i];
	}
    
    for(int i=0;i<n;i++){
    	cout<<sum[i]<<" , ";
	}
}

int main(){
	
	int arr1[100],arr2[100],n;
	cout<<"Enter a common limit for both the arrays: ";
	cin>>n;
	cout<<"Enter the 1st Array: ";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter the 2nd array: ";
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	
	add_arrays(arr1,arr2,n);
}
