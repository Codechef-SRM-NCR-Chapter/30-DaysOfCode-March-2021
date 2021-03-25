#include<iostream>
#include<algorithm>
using namespace std;

int sum_pair(int arr[],int m)
{
	int sum=0;
	sort(arr,arr+m);
	for(int k=0;k<m;k+=2)
	{
	 sum+=arr[k];	
	}
	return sum;
} 
int main()
{
 int n,nums[100];
 cout<<"Enter length of array\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter elements\n";
 cin>>nums[i];
 cout<<endl;
 }
 int temp=sum_pair(nums,n);
 cout<<temp;
return 0; 
}
