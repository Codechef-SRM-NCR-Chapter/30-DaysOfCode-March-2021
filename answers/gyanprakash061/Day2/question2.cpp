#include<bits/stdc++.h> 
using namespace std; 


int countDigits(int n) 
{ 
	int count_digits = 0; 


	int x = n; 
	while (x) 
	{ 
		x = x/10; 

	
		count_digits++; 
	} 
	return count_digits; 
} 


bool check(int n) 
{ 

	int count_digits = countDigits(n); 

	
	int sum = 0; 
	int x = n; 
	while (x) 
	{ 
		int r = x%10; 

		sum = sum + pow(r, count_digits--); 
		x = x/10; 
	} 

	return (sum == n); 
} 

int main() 
{ 
	int n ; 
	cout<<"enter no to check if the number is disarium or not";
	cin>>n;
	if( check(n)) 
		cout << "Disarium Number"; 
	else
		cout << "Not a Disarium Number"; 
	return 0; 
} 
