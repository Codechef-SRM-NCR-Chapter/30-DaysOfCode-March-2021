#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int emirp(int b)
{
int rem,rev=0;
while(b!=0)
{
rem=b%10;
rev=rev*10+rem;
b/=10;
}
if(rev==2||rev%2!=0)
cout<<"Its an emirp";
else
cout<<"Its not an emirp";
}
int prime(int a)
{
if(a==2||a%2!=0)
emirp(a);
else
cout<<"Number is not prime";
}
int main()
{
int z;
cout<<"Enter a number";
cin>>z;
prime(z);
return 0;
}
