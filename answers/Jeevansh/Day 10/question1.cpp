#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,flag;
	char str[100];
	flag=0;
	int arr[26];
	for(i=0;i<26;i++)
	{
		arr[i]=0;
	}
	cout<<"Enter string\n";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	 if(str[i]>='a'&&str[i]<='z')
	 {
	  arr[str[i]-'a']++;
	 }	
	 else if(str[i]>='A'&&str[i]<='Z')
	 {
	 	arr[str[i]-'A']++;
	 }
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]==0)
		flag=1;
	}
	if(flag==0)
	{
		cout<<"\nPANGRAM EXISTS\n";
	
	}
	else cout<<"\nPANGRAM DOESN'T EXIST\n";
return 0;	
}

