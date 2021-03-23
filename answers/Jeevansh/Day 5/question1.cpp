#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,c;
	cout<<"Enter value of n\n";
	cin>>n;
	a=0;
	b=1;
	cout<<a<<" "<<b<<" ";
	c=a+b;
	while(c<=n)
	{
		cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;
	}
return 0;	
}
