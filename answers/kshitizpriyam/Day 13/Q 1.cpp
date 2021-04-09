#include<iostream>
using namespace std;

int sum_digits(int n, int size){
	
	int sum=0;
	
	while(n!=0){
		sum = sum + n%10;
		n=n/10;
}
		cout<<sum;
}

int main(){
	
	int n;
	cin>>n;
	
	sum_digits(n,size);
}
