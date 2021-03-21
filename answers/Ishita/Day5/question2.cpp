#include<iostream>
using namespace std;
int checkprime(int x)
{
	int a,d;
	d=0;
	a=1;
	while(a<=x)
	{
		if(x%a==0)
		{
		    d++;
		}
		a++;
    }
    if(d==2)
	{
	    return 1;
	}
	else return 0;
}
int main()
{
	int n=4,count=1,b;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			b=checkprime(count);
			if(b==1)
			{
			    cout<<"# ";
			}
			else cout<<"* ";
			count++;
		}
		cout<<endl;
	}
return 0;	
}
