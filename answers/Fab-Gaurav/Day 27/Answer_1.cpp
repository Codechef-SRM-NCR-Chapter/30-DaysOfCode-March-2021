#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, r, q, arr[n], querie[q], j=0;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	cout<<"Enter the rotation count : ";
	cin>>r;
	cout<<"Enter the number of Queries : ";
	cin>>q;
	
	cout<<"Enter the elements of Array : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the elements of Queries : ";
	for(int i=0; i<q; i++)
	{
		cin>>querie[i];
	}
	
	while(j<r)
	{
		int temp=arr[n-1];
		for(int i=n-1; i>0; i--)
		{
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
    j++;
	}
	
	cout<<"Value of Indices : ";
	for(int i=0; i<q; i++)
	{
		cout<<(arr[querie[i]])<<", ";
	}
    cout<<endl;
    return 0;
}
