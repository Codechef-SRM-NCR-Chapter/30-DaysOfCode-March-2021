#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,extra;
  int max=0;
  bool check;  
  cout<<"Enter the range"<<endl;
  cin>>n;
  int candies[n];
  cout<<"Enter the no. candies"<<endl;
  for(int i=0;i<n;i++){cin>>candies[i];}
  cout<<"Enter the no. of extra candies"<<endl;
  cin>>extra;
  for(int i=0;i<n;i++)
  { 
      if (candies[i]>max) max=candies[i];
  }
 for(int i=0;i<n;i++)
 {
     if(candies[i]+extra> max){ check=1;}
     else{check=0;}
     if (check == 1){cout<<"true"<<endl;}
     else{cout<<"false"<<endl;}
 
 }
 
 return 0;
}