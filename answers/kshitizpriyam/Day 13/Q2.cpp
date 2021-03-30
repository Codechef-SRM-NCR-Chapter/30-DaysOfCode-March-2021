#include<iostream>
using namespace std;

bool chk_pallindrome(int arr[], int n){
	
	int flag=0;
	
	for(int i=0; i<=n/2 && a!='\0';i++){
		
		if(arr[i]!= arr[n-i-1]){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		cout<<"NOT PALINDROME";
	}
	else{
		cout<<"PALINDROME";
	}
	
}

int main(){
	
	int arr[100],n;
	
	cout<<"Enter a limit: ";
	cin>>n;
	
	cout<<"Enter an array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	chk_pallindrome(arr,n);
}
