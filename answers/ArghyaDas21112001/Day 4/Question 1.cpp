#include <iostream>
#include <math.h>
using namespace std;

void primeFactors(int num)
{
   while (num%2 == 0)
   {
      cout<<"2,";
      num = num/2;
   }
   for (int i = 3; i <= sqrt(num); i = i+2)
   {
      while (num % i == 0)
      {
         cout<<i<<",";
         num = num / i;
      }
   }
   if (num > 2)
   cout<<num<<",";
}
int main()
{
   int n;
   cout<<"Enter the number: ";
   cin>>n;
   cout<<"Prime factors of "<<n<<" are :  ";
   primeFactors(n);
   return 0;
}
