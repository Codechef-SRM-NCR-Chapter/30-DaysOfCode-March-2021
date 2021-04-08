#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int nums[5]={0,1,2,3,4};
 int index[5]={0,1,2,2,1};
 int target[5]={0,0,0,0,0};
  for (int i=0;i<5;i++)
  {
      target[index[i]] = nums[i] ;
  }
  cout<<"Nums :"<<endl;
  for (int i=0;i<5;i++)
  {
      cout<<nums[i]<<" ";
  }
  cout<<endl<<"Index : "<<endl;
  for (int i=0;i<5;i++)
  {
   cout<<index[i]<<" ";   
  }
  cout<<endl<<"Target : "<<endl;
  for (int i=0;i<5;i++)
  {
      cout<<target[i]<<" ";
  }
  return 0;
}