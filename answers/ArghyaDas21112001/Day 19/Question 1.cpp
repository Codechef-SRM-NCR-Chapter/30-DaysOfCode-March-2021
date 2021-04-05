#include <iostream>
using namespace std;

int main()
{
	int n;
    cout<<"Enter size:";
    cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	cout<<"Repeating:";
	for(int i=0; i<n; i++)
	{
	    if(arr[abs(arr[i])-1] > 0)
	    {
	        arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];

	    }
	    else
	    {
	        cout<<abs(arr[i])<<" ";
	    }
	}
	cout<<endl<<"Not present: ";
	for(int i=0; i<n; i++)
	{
	    if(arr[i]>0)
	    {
	        cout<<i+1;
	    }
	    
	}
    return 0;
}
