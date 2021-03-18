#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int a;
int n;
cout<<"Enter the number of digits  :";
cin>>n;
cout<<"Enter the number :";
cin>>a;
int sum=0;
int i,p,d;
int u=pow(a%10,n);
for(i=1;i<n;i++)
{
int z=pow(10,i);
int f=a/z%10;
p=pow(f,n-i);
sum=sum+p;
}
d=sum+u;
if(a==d)
{
cout<<"Its a disarium number";
}
else
{
cout<<"Its not a disarium number";
}
return 0;
}
