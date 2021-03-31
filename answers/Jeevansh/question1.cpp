#include<iostream>
#include<string>
using namespace std;
string dup_adj(string s1,int n)
{
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s1[i+1])
		{
			for(int j=i+1;s1[j]!='\0';j++)                    
			{
				s1[j]=s1[j+1];
				
			}i--;
		}
		
	}
	return s1;
}
int main()
{
	string str;
	int i,j;
	cout<<"Enter string\n";
	cin>>str;
	int l=strlen(str);
	str=dup_adj(str,l);
	cout<<"\n"<<str;
}
