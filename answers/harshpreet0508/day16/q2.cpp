// Find the transition point froma sorted binary array
// Eg: [0,0,0,1,1,1] -> 3

#include <iostream>
using namespace std;

int t(bool a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       if(a[i] == 1)
       {
           return i;
       }
    }
    return -1;
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
   
   if(t(a,n)==-1)
        cout<<"\nNo transition point";
    else
        cout<<"\nTransition point is "<<t(a,n);
   
   return 0;
}
