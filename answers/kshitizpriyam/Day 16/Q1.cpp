#include<iostream>
using namespace std;

int main(){
	
	int a[100],n;
	cout<<"Enter a limit: ";
	cin>>n;
	cout<<"Enter an array in terms of 0's & 1's: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int count=0;
	for(int i=0;i<n;i++){
		
		if(a[i]==1){
			count++;
		}
	}
	cout<<count;
}
