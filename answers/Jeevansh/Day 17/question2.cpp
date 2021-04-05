#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i,j;
	int flag=0; int sum;
	cout<<"Enter length of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>arr[i];
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
		  sum+=arr[j];
		  if(sum==0)
	      {
		   flag++;
	      }
		}
	}
	
 cout<<"Sub arrays having sum=0: "<<flag;
return 0;
}
