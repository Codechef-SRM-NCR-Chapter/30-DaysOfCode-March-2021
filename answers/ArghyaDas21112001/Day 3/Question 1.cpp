#include <iostream>
#include <math.h>
using namespace std;
int pattern(int num)
{
   int a=0,s=0; 
   for(int i=1 ; i<=num ; i++) 
   { 
     a=(a*10)+i; 
     s=s+a; 
   } 
  
    return s;
}
int main() 
{ 
    int num ;
    cout<<"Enter the limit :" ;
    cin>>num;
    int ans;
    ans=pattern(num);
    cout<<"The sum of 1 + 12 + 123 +..... series is: "<<ans;
    return 0; 
} 
