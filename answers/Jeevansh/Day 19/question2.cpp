#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,arr[100],sum;
    int count=0; 
	cout<<"Enter length of array\n";
	cin>>n; 
	cout<<"Enter sum\n";
	cin>>sum;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n"; 
		cin>>arr[i]; 
		cout<<endl;	
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]<sum)
				{
					count++;
				}
			}
		}
	}
cout<<count;
return 0;	
}
