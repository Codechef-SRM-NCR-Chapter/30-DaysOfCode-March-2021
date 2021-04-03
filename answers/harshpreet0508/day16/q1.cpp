// Given a binary array, sorted in non increasing order, count the number of 1's in it

#include <iostream>
using namespace std;

int count(bool a[], int l, int h)
{
    int m;
    if(h >= l)
    {
        m = l + (h-l)/2;
     
        if((m == h||a[m+1] == 0)&&(a[m] == 1))
          return m+1;
     
        if(a[m] == 1)
          return count(a,m+1,h);
     
        return count(a,l,m-1);
     }
  return 0;
}
     
int main()
{
   int n,i;
   cin>>n;
   
   bool a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   cout<<"\nNo of 1's are "<<count(a,0,n-1);
   return 0;
}
