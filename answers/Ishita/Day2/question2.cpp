#include <iostream> 
using namespace std; 
  
bool isPrime(int n) // Returns true if n is prime Else false. 
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
    // Check if n is prime 
    if (isPrime(n) == false) 
        return false; 
  
    // Find reverse of n 
    int rev = 0; 
    while (n != 0) 
    { 
        int d = n % 10; 
        rev = rev * 10 + d; 
        n /= 10; 
    } 
  
    // If both Original and Reverse are Prime,then it is an Emirp number 
    return isPrime(rev); 
} 

int main() 
{ 
    int n;
    cin>>n; // Input number 
    if (isEmirp(n) == true) 
        cout << "Yes"; 
    else
        cout << "No"; 
}
