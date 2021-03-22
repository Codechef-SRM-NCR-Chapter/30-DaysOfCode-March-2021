#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0;
 int arr[5]={1,4,2,5,3};
 int n=5;
  for(int p=1;p<=n;p+=2)
  {
		for(int i=0;i<n-p+1;i++) 
    {
		  for(int j=i;j<i+p;j++) 
          {s+=arr[j];}
     }
  }
 cout<<s;
 return 0;    
}
