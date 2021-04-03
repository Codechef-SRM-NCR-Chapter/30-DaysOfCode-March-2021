#include<iostream>
#include<algorithm>
using namespace std;
int trans_pt(int arr[],int n)
{
	int beg,end,mid;
	beg=0;end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==1)
		{
			if(mid==0||arr[mid-1]==0&&mid>0)
			{
				return mid+1;
			}
	    }
		else if(arr[mid]==0)
		{
			beg=mid+1;
		}
		else end=mid-1;
	}
return -1;	
}
int main()
{
	int x,a[100];
	cout<<"Enter length of array\n";
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cout<<"Enter element\n";
		cin>>a[i];
		cout<<endl;
	}
	sort(a,a+x);
	int q=trans_pt(a,x);
	if(q>=0)
	{
		cout<<"\nTransition Point found at "<<q<<" position\n";
	}
	else 
	cout<<"Transition point not found";
	return 0;
	 
	//time complexity is logn due to use of binary search
}
