#include<iostream>
using namespace std;
int main()
{
	int i,j,n,nums[100],trgt;
	cout<<"Enter length of the array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>nums[i];
		cout<<endl;
	}
	cout<<"Enter target number\n";
	cin>>trgt;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int temp=nums[i]+nums[j];
			if(temp==trgt)
			{
				cout<<"["<<i<<", "<<j<<"]";
			}
		}
	}
return 0;	
}
