#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k;
	int target[5];
	int num[5]={0,1,2,3,4};
	int index[5]={0,1,2,2,1};
	for(i=0;i<5;i++)
	{
		target[index[i]]=num[i];
	}
	cout<<"Nums are: "<<"\t";
	for(k=0;k<5;k++)
	{
		cout<<num[k]<<"  ";
	}
	cout<<"\n";
	cout<<"Index is: "<<"\t";
	for(k=0;k<5;k++)
	{
		cout<<index[k]<<"  ";
	}
	cout<<"\n";
	cout<<"Target is: "<<"\t";
	for(k=0;k<5;k++)
	{
		cout<<target[k]<<"  ";
	}
	return 0;
}
