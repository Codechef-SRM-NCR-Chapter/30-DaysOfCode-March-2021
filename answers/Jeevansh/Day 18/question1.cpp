#include<iostream>
using namespace std;
int main()
{
	int n;
	int flag=0;
	cout<<"enter number\n";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if((i*i)<n)
		{
			flag++;
		}
	}
	cout<<"\n"<<flag;
}
