#include <iostream>
using namespace std;
int main()
{
   int nums[100],n,i,j,flag,temp;
   
   int sum=0;
   cout<<"Enter length of array\n";
   cin>>n;
   temp=0;
   for(i=0;i<n;i++)
   {
   	cout<<"Enter elements\n";
   	cin>>nums[i];
   	cout<<endl;
   }
   for (i=0; i<n; i++)
   {
       flag=0;
	   for (j=i+1; j<n; j++)
      if (nums[i] == nums[j])
         {
         	nums[i]=-1;
         	nums[j]=-1;
         	flag=1;
		 break;
		 }
      if (flag==0&&nums[i]!=-1)
	     {sum+=nums[i];}
         
   }
  
  cout<<sum;
return 0;   
}
