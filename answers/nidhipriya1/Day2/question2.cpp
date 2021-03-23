#include<iostream>
using namespace std;

bool isprime(int n)
{
	if(n<=1)
	return false;
	
	for(int i=2;i<n;i++)
	if(n%i==0)
	return false;
		
	
	return true;
	}

bool isemirp(int n)
{
	 if(isprime(n)== false)
	 return false;
	 
	 int rev=0;
	 while(n!=0)
	 {
	 	int lastdigit=n%10;
	 	rev= rev*10+lastdigit;
	 	n=n/10;
	 	
	 	
	 	return isprime(rev);
	 	
		  }
}

int main()
{
	int n;
	cout<<"Enter a number to check if a number is emirp or not";
	cin>>n;
	if(isemirp(n)==true)
	cout<<"Number is emirp";
	else
	cout<<"Number is not emirp";
	
	
}
