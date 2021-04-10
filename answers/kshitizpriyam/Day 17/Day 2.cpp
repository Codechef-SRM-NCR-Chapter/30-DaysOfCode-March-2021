#include<iostream>
using namespace std;

int main(){
	
	int a[100],n,count=0;
	cout<<"ENter a limit for the array: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int k=0;k<n;k++){
		cin>>a[k];
	}
	
	for(int i=0;i<n;i++){
		int sum = 0;
		for(int j=i;j<n;j++){
			sum = sum + a[j];
			
			if(sum==0){
				count++;
			}
		}
	}
	cout<<"No. of subarrays with 0 as their sum = "<<count;
}
