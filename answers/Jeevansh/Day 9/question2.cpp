#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,sum,n,nums[100],temp;
	temp=0;
	cout<<"Enter length of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	 cout<<"Enter elements\n";
	 cin>>nums[i];
	 cout<<endl;
    }
    int pref[n];
	pref[0]=nums[0];
	for(i=1;i<n;i++)
    {
    	pref[i]=pref[i-1]+nums[i];
	}
	for(i=0;i<n;i++)
	{
	  for(j=i;j<n;j++)
    	{
    		sum=pref[j]-pref[i]+nums[i];
    		temp=max(temp,sum);
		}
	}
    cout<<"Max sum: "<<temp;
return 0;    
}
