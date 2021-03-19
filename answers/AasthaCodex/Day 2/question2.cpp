
#include <bits/stdc++.h>
using namespace std;
  
int calcLength(int n) {
     int length= 0;
     while(n > 0) {
         length++;
         n= n/10;
     }
     
     return length;
}

int main()
{
     int num, sum= 0, rem= 0;
     cin>>num;
     int len= calcLength(num);

     int n= num;

     while(n > 0) {
         rem= n%10;
         sum= sum + pow(rem, len);
         n= n/10;
         len--;
     }
     
     if(sum == num)
         cout<<num<<" is a Disarium Number";
     else
         cout<<num<<" is a not Disarium Number";
         
    return 0;
}
