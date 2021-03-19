#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	int n,count;
	count=0;
	char temp[20];
	cout<<"Enter number to be checked\n";
	cin>>n;
	itoa(n,temp,10);
	int l1=strlen(temp);
	for(int i=0;i<l1;i++)
	{
		for(int j=i+1;j<l1;j++)
		{
			if(temp[j]==temp[i])
			{
				count++;
			}
			temp[j]=='0';
		}
	}
	if(count>1)
	{
		cout<<"\nGiven number "<<n<<" is not unique\n";
	}
	else cout<<"\nGiven number "<<n<<" is unique\n";
return 0;
}
