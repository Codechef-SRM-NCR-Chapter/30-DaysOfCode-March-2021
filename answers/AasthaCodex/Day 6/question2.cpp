#include <bits/stdc++.h>
using namespace std;
int sum(vector<int>& a) 
{
    int sum=0;
    int n=a.size();
    for(int len=1;len<=n;len+=2)
        for(int i=0;i<n-len+1;i++)
            for(int j=i;j<i+len;j++) 
                sum+=a[j];
    
    return sum;
}
int main() 
{
    vector<int> a = {1,4,2,5,3};
  
  cout<<"SUM = "<<sum(a)<<endl;
  return 0; 
}
