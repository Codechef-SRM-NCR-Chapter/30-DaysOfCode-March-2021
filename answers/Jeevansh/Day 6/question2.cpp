#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],i;
	cout<<"Enter length of the array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>arr[i];
		cout<<endl;
	}
	int sum=0;
    for(int k=1;k<=n;k+=2)
        {
		for(i=0;i<n-k+1;i++)  
            {
			  for(int j=i;j<i+k;j++) 
                {sum+=arr[j];}
            }
       }
      cout<<sum;
return 0;	   
}
