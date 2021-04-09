#include<iostream>

using namespace std;
int main()
{
	int n,k,count;
	cout<<"Enter the number of arrays you want\n";
	cin>>n;
	int arr[10];
	
	for(int i=0;i<n;i++)
	{
	    cout<<"\nEnter the number of elements of "<<i+1<<" array\n";
	    cin>>k;
	    cout<<"Enter its elements\n";
	    for(int j=0;j<k;j++)
	    {
	        cin>>arr[j];
	    }
	    count=0;
	    for(int l=0;l<k;l++)
	    {
	        int start=arr[l];
	        for(int m=l;m<k;m++)
	        {
	            int end=arr[m];
	                if(start==1 && end==1)
	                {
	                    ++count;
	                }
	            
	        }
	    }
	    cout<<"\nNumber of subarrays whose starting and end point is 1 of "<<i+1<<" array is "<<count;
	}
    return 0;	
}
