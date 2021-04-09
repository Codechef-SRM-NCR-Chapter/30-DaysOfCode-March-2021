#include<iostream>
using namespace std;
void quad_sum(int arr[],int n,int x)
{
	int i,j,k,l;
	for(i=0;i<n-3;i++)
	{
		for(j=i+1;j<n-2;j++)
		{
			for(k=j+1;k<n-1;k++)
			{
				for(l=k+1;l<n;l++)
					if(arr[i]+arr[j]+arr[k]+arr[l]==x)
					{
						cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l];
					}
				
			}
		}
	}
}
int main()
{
	int a[100],y,len;
	cout<<"Enter length of array\n";
	cin>>len;
	for(int c=0;c<len;c++)
	{
		cout<<"Enter element\n";
		cin>>a[c];
		cout<<endl;
	}
	cout<<"Enter number to be checked\n";
	cin>>y;
	quad_sum(a,len,y);
return 0;	
}
