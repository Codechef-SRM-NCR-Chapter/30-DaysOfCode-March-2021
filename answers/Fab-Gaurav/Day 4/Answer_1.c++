//Program to print the prime factors of an number "n"

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void primeFactor(int n) {
   while (n%2 == 0){
      cout<<"2 ";
      n = n/2;
   }
   
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout<<i<<" ";
         n = n/i;
      }
   }   
   if (n > 2)
   return ;
}


int main() {
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   primeFactor(n);
   cout<<"are the Prime Factor of "<<n;
   return 0;
}