#include <iostream>
using namespace std;
int factorcount(int a)
{ int factors=0;
    for(int i=1;i<a;i++)
        {if(a%i==0)
         factors++;
         }
return factors;
}

int reverse(int a)
{  int rev=0,rem;

  while(a>0)
  {rem=a%10;
  rev=rev*10+rem;
  a=a/10;}
return rev;
}


int main() {
int n;
cin>>n;

int b=factorcount(n);
int r=reverse(n);
int c=factorcount(r);
if (n==1)
    cout<<"Unique Number";
    else if(n<=0)
    cout<<"not a natural number";
    else if(b<=1&&c<=1)
    cout<<"Emrip Number";
    else cout<<"Not an emrip number";
    
return 0;
}
