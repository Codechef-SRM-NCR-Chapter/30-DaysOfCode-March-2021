#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
clrscr();
	long num;
	char str[10];
	int a[10],f=1,i=0;
	
	cout<<"Enter any number:";
	cin>>num;
	itoa(num,str,10);	
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '0':
						a[0]++;
						break;
			case '1':
						a[1]++;
						break;
			case '2':
						a[2]++;
						break;
			case '3':
						a[3]++;
						break;
			case '4':
						a[4]++;
						break;
			case '5':
						a[5]++;
						break;
			case '6':
						a[6]++;
						break;
			case '7':
						a[7]++;
						break;
			case '8':
						a[8]++;
						break;
			case '9':
						a[9]++;
						break;
		}
		i++;
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>1)
		{
			f=0;
			break;
		}
	}
	
	if(f!=0)
		cout<<"\nNumber is Unique";
	else
		cout<<"\nNumber is Not Unique";
	
	return 0;
}

