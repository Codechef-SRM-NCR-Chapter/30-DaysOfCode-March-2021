// Print first 50 fibonacci series

#include <iostream>
using namespace std;

int main()
{
    long int a=0,b=1,c;
    cout<<a<<' '<<b;
    for(int i=1;i<=50;i++)
    {
       c=a+b;
       cout<<c<<' ';
       a=b;
       b=c;
    }
  return 0;
}
