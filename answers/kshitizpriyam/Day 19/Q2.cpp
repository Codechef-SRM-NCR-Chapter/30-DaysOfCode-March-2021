#include<iostream>
using namespace std;

int count_triplets(int a[], int n, int X){
	
	int count=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++)
				if(a[i]+a[j]+a[k]<X)
				count++;
		}
	}
	return count;
}

int main(){
	
	int a[100],n,X;
	cout<<"Enter a limit: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the no. : ";
		cin>>X;
		
		cout<<count_triplets(a,n,X)<<endl;
}
