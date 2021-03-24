#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,a,b,c,n,arr[100];
	int count=0;
	cout<<"Enter length of the array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>arr[i];
		cout<<endl;
	}
	cout<<"\nEnter values of a,b and c respectively\n";
	cin>>a>>b>>c;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(arr[i]-arr[j])>a)
			{
                    continue;
            }
                for(int k=j+1;k<n;k++)
				{
                    if((abs(arr[j]-arr[k])<=b)&&(abs(arr[i]-arr[k])<=c))
                    {
					count++;
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                    }
                    
		        }
	   }
    }
   cout<<"\nNo. of good triplets: "<<count;
return 0;    
}
