#include <iostream>
using namespace std;

int main() 
{
long a=0,b=1,c;
cout<<a<<", "<<b;
for(int i=0;i<48;i++)
 {
  c=a+b;
  cout<<", "<<c;
  a=b;
  b=c;}
return 0;
}
