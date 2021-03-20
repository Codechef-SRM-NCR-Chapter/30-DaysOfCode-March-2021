#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int count=1;
	cout<<"Enter value of n\n";
	cin>>n;
	cout<<endl;	
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
	cout<<endl;
	}	
return 0;	
}
