#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j;
	char str[100];
	cout<<"Enter string\n";
	gets(str);
	int count;
	for(i=0;str[i]!='\0';i++)
	    if(str[i]==' ')
		cout<<"CamelCase does not exist\n";
	if(str[0]>='a'&&str[0]<='z')
		{
		 count=1;	
		}
		else if(str[0]>='A'&&str[0]<='Z')
		{
			count=0;
		}
		for(i=0;str[i]!='\0';i++)
	    {   
		 if(str[i]>='A'&&str[i]<='Z')
		 {
		 count++;
		 }
	    }
	    for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				cout<<str[i];
			}
			else 
			
			 cout<<endl<<str[i];
			
		}
		
	cout<<"\n"<<count;
	
return 0;	
}
