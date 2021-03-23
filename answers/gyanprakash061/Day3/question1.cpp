#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=1,s=1;
	cin>>n;
	
for(int i=2;i<=n;i++)
{
s=(s*10)+i;
sum=sum+s;
if(i==n)
break;
}

	cout<<sum;
	return 0;
}
