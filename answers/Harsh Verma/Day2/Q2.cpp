#include <iostream>
#include <math.h>
using namespace std;

int powersum(int a, int nterms)
{  int psum=0,rem;

  for(int i=nterms;i>0;i--)
  {rem=a%10;
  psum=psum + pow(rem,i);
  a=a/10;}
return psum;
}


int main() {
int n;
cin>>n;
int terms=0, a=n;
  while(a>0)
  {terms++;
   a=a/10;}

int ps=powersum(n,terms);
if(ps==n)
cout<<"Disarim number";
else cout<<"Not a Disarim number";
return 0;
}
