#include<bits/stdc++.h>
using namespace std;

int find_missing(int a[], int n){
	
	int i;
	cout<<"The repeating element is ";
	for(i=0;i<n;i++){
		if(a[abs(a[i])-1]>0) 
		a[abs(a[i])-1]= -a[ abs(a[i])-1];
	
	else
		cout<<abs(a[i])<<endl;
	}
	
	cout<<"Missing element is ";
	for(i=0;i<n;i++){
		if(a[i]>0){
			cout<<(i+1);
		}
	}
}

int main(){
	
	int a[100],n;
	cout<<"Enter a limit: ";
	cin>>n;
	
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	find_missing(a,n);
}
