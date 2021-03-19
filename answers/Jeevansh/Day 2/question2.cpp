#include<iostream>
using namespace std;

int checkprime(int m)
{
	int count=0;
	int a;
	a=1;
	while(a<=m)
	{
		if(m%a==0)
		count++;
		a++;
	}
	if(count==2)
	return 1;
	else return 0;
	
}
int main()
{
	int n,rev,d;
	cout<<"Enter the number to be checked\n";
	cin>>n;
	int n1=n;
	int ch=checkprime(n);
	
	  rev=0;
	  while(n!=0)
	  {
	    d=n%10;
	    rev=rev*10+d;
	    n=n/10;
	  }	
	int ch1=checkprime(rev);
	if(ch1==1&&ch==1)
	{cout<<"Given number "<<n1<<" is an Emirp Number\n";}
	else cout<<"Given number "<<n1<<" isn't an Emirp Number\n";
return 0;	
}
