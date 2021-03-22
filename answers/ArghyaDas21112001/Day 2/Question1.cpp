#include <iostream>
#include <math.h>
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

int checkDisarium(int n) 
{ 
    int count_digits = countDigits(n); 
    int sum = 0;
    int x = n; 
    int rem;
    while (x!=0) 
    {
        rem = x%10; 
        sum = sum + pow(rem, count_digits--); 
        x = x/10; 
    } 

    return (sum == n); 
} 
