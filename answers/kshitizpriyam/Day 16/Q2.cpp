#include<iostream>
using namespace std;

int transition_point(int a[], int n){
	
	int k;
	for(k=0;k<n;k++){
		
		if(a[k]==1){
			return k;
		}
	}
	return -1; 
}

int main(){
	
	int a[100],n;
	cout<<"Enter a limit: ";
	cin>>n;
	cout<<"Enter an array in terms of 0's & 1's: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<transition_point(a,n);
	

}
