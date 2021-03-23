#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<n+1;i++)
{
int p;
p=pow(i,3)+2*i;
cout<<p<<",";
}
return 0;
}
