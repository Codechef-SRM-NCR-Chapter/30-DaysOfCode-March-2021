#include<iostream>
using namespace std;
void print_dup(int arr1[],int l1)
{
	int i,j;	
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l1;j++)
		{
			if(arr1[i]==arr1[j])
			{
				cout<<"Repeating number: "<<arr1[i];
			}
		}		
	}
}

int miss(int a1[],int len)
{
	int j;
	int flag=0;	
    for(int j=1;j<=len;j++)
    {
    	flag=0;
    	for(int i=0;i<len;i++)
    	{
    		if(j==a1[i])
    		{
    			flag=1;
			    break;
		    } 
  		}
  		if(flag==0)
  		return j;
	}
	
}



int main()
{
	int i,j,n,arr[100];
	cout<<"Enter length of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>arr[i];
		cout<<endl;
	}
	print_dup(arr,n);
	int k=miss(arr,n);
    cout<<"\nMissing number: "<<k;
	return 0;
}
