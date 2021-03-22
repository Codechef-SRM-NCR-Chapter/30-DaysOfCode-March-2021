#include<iostream>
using namespace std;

bool isPrime(int n){
	
	int m=n/2;
	
		for(int i=2;i<m;i++){
		
		if(n%i==0){
			//out<<"Given No. is not a Emirp Number"<<endl;
			return false;
		}
	}
	return true;
}

bool chkEmirp(int n){
	
	if(isPrime(n)==false){
		return false;
	}
	
	int rev=0;
	while(n!=0){
		int d = n%10;
		rev = rev*10 + d;
		n = n/10;
	}
	return isPrime(rev);
}

int main(){
	cout<<"To check if a number taken as an input is a Emirp Number or not"<<endl;
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	if(chkEmirp(n)==true){
		cout<<"Given number is a Emirp Number."<<endl;
	}
	else{
		cout<<"Given no. is not Emirp";
	}
	
}
