#include<iostream>
using namespace std;
int prime(int c)
{
	int a,flag;
	flag=0;
	a=1;
	while(a<=c)
	{
		if(c%a==0)
		{
		    flag++;
		}
		a++;
    }
    if(flag==2)
	{
	    return 1;
	}
	else 
	return 0;
}

int main()
{
	int c,x;
	c=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			 
			x=prime(c);
			if(x==1)
			{
			    cout<<"# ";
			}
			else 
			cout<<"* ";
			c++;
		}
		cout<<"\n";
	}
return 0;	
}