#include<iostream> 
using namespace std; 
int count(int arr[],int n) 
{ 
  int beg,end,mid;
  beg=0;end=n-1;
  while(end>=beg) 
  { 
     mid=beg+(end-beg)/2;  
    if((arr[mid]==1)&&(mid==end||arr[mid+1]==0)) 
      {
      	return mid+1;
	  }  
    else if(arr[mid]==1) 
      {
	   beg=mid+1; 
      }
    else end=mid-1; 
  } 
  return 0; 
} 
int main() 
{ 
   int a[]={1,1,0,0,0,0,0}; 
   int x=sizeof(a)/sizeof(a[0]); 
   cout<<"Count of 1's in given array is " <<count(a,x); 
   return 0; 
}
