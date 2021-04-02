#include <iostream>
using namespace std;
int noof1(int arr[],int n)
{
   int i,ctr=0;
   i=n/2;
   while(i>=0)
   {
       if(arr[i]==0)
       {
           i--;
       }
       else if(arr[i]==1)
       {
           if(arr[i+1]==0 && arr[i]==1)
           {
               for(int j=0;j<=i;j++)
               {
                   ctr++;
               }
               return ctr;
               break;
           }
           else 
           i++;
       }
   }
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of binary array (sorted in decreasing order)\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i = noof1(arr,n);
    cout<<"No. of 1 is "<<i;
    return 0;
}
    