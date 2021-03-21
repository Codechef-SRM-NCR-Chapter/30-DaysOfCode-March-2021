//program to print the pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,n=1;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
cout<<n;
n++;
}
cout<<"\n";

}

return 0;
}
