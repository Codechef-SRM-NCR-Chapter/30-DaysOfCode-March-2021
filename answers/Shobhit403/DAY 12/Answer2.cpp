#include<iostream>
using namespace std;
int main()
{
	int p,o,cnt;
	cout<<"Enter no. of arrays you want:\n";
	cin>>p;
	int arr[10];
	for(int i=0;i<p;i++)
	{
	    cout<<"\nEnter no. of elements of "<<i+1<<" array:\n";
	    cin>>o;
	    cout<<"Enter its elements:\n";
	    for(int j=0;j<o;j++)
	    {
	        cin>>arr[j];
	    }
	    cnt=0;
	    for(int l=0;l<o;l++)
	    {
	        int start=arr[l];
	        for(int m=l;m<o;m++)
	        {
	            int end=arr[m];
	                if(start==1 && end==1)
	                {
	                    ++cnt;
	                }
	        }
	    }
	    cout<<"\nNo. of subarrays whose starting and end point is 1 of "<<i+1<<" array is: "<<cnt;
	}
    return 0;	
}
