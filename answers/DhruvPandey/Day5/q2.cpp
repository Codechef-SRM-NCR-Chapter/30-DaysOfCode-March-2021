  
//program to print the pattern
#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
int i,j,n=1;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
if(n==2||n==3||n==5||n==7)
cout<<" # ";
else
cout<<" * ";
n++;
}
cout<<"\n";
}
return 0;
}
