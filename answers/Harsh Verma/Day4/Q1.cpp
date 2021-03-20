#include <iostream>
using namespace std;

int main() {
   int n ;
   cout<<"Enter a number to check its prime factors";
   cin>>n;
   cout<<"The prime factors are : ";
for(int i=2;i<=n;i++){
     while(n%i==0){
     cout<<i<<", ";
     n=n/i;}
     }
   return 0;
}
