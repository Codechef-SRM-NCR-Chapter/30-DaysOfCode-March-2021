#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,t,j;
    int arr[100];
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the distinct elements of the array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target";
    cin>>t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            cout<<"The indices which have sum"<<t<<"are at indices"<<i<<"and"<<j;
            
}
   }
   return 0;
}
