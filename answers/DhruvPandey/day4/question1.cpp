#include <iostream>
#include <math.h>
using namespace std;
int num;
void prime(int num) {
   while (num%2 == 0){
      cout<<"2\t";
      num = num/2;
   }
   for (int i = 3; i <= sqrt(num); i = i+2){
      while (num%i == 0){
         cout<<i<<",";
         num = num/i;
      }
   }
   if (num > 2)
   cout<<num<<"\t";
}
int main() {
   cout<<"Enter the number :"<<"\t";
   cin>>num;
   cout<<"Prime factors "<<num<<" are :"<<",";
   prime(num);
   return 0;
}
