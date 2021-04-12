#include<iostream>
using namespace std;

void findsum(int a[], int n, int key){
	
	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			for(int k=j+1;j<n-1;j++){
				for(int l=k+1;l<n;l++){
					
					if(a[i]+a[j]+a[k]+a[l]==key){
						cout<<a[i]<<", "<<a[j]<<", "<<a[k]<<", "<<a[l]<<" $";
						return;
					}
				}
			}
		}
	}
	
	
}

int main(){
	
	int a[100],n,key;
	cout<<"Enter a limit for the array: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the key value: ";
	cin>>key;
	
	findsum(a,n,key);
}
