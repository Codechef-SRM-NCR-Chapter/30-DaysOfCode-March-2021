#include<iostream>
using namespace std;

long int remove_stack(long int n){
	
	int prev_digit = n%10;
	
	long int pow =10;
	long int res = prev_digit;
	
	while(n){
		int cur_digit = n%10;
		
		if(cur_digit!=prev_digit){
			res = res + (cur_digit*pow);
			
			prev_digit = cur_digit;
			pow = pow*10;
		}
		n = n/10;
	}
	return res;
}


int main(){
	
	int testcase,n;
	cin>>testcase;
	while(testcase--){
		cin>>n;
	}
	//int n= 12224;
	
	cout<<remove_stack(n);
} 
