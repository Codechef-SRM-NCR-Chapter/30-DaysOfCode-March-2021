#include<iostream>
#include<algorithm>
using namespace std;
int bit_count(int number)
{
   int count=0;
   while(number)
   {
      if(number&1==1)
      count++;
      number=number>>1 ; 
   }
   return count;
}
int comp(int n1, int n2)
{
   int count1 = bit_count(n1);
   int count2 = bit_count(n2);
   if(count1<=count2)
      	return 0;	
        return 1;
}
int main()
{
   int arr[100],n;
   cout<<"Enter size of array\n";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	cout<<"Enter element\n";
   	cin>>arr[i];
   	cout<<endl;
   }
   sort(arr,arr+n,comp);
   cout<<"Sorted array: ";
   for(int j=0;j<n;j++)
   {
      cout<<arr[j]<<" ";
   }
 return 0;  
}
