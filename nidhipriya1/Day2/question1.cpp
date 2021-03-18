 #include <iostream> 
using namespace std; 
 
bool isPrime(int n) 
{ 

	if (n <= 1) 
		return false; 


	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 


bool isEmirp(int n) 
{ 

	if (isPrime(n) == false) 
		return false; 


	int rev = 0; 
	while (n != 0) { 
		int d = n % 10; 
		rev = rev * 10 + d; 
		n /= 10; 
	} 

	
	return isPrime(rev); 
} 


int main() 
{ 
	int n;
	cout<<"Enter a number to check if a number is emirp or not";
	cin>>n;
	if (isEmirp(n) == true) 
		cout << "Yes"; 
	else
		cout << "No"; 
} 


