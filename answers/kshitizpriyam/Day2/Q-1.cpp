#include<iostream>
#include<cmath>
using namespace std;

int calculateLength(int n){
	int length = 0;
	while(n!=0){
		length = length + 1;
		n = n/10;
	}
	return length;
}

int main(){
	int num;
	cout<<"To identify if a given no. is a Disarium Number or not"<<endl;
	cout<<"Enter a no. : ";
	cin>>num;
	
	int sum=0,rem=0,n;
	
	int len=calculateLength(num);
	n=num;
	
	while(num>0){
		rem = num%10;
		sum = sum + (int)pow(rem,len);
		num=num/10;
		len--;
	}
	
	if(sum==n){
		cout<<"Given no. is a Disarium No."<<endl;
	}
	else{
		cout<<"Given No. is not a Disarium No."<<endl;
	}
	
	return 0;

}
