#include <iostream>
using namespace std;
int half(int ele)
{
    ele=ele/2;
    return ele;
}
void zeroarray(int arr[],int n)
{
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        while((arr[i]/2)>=1)
       {
            arr[i]=half(arr[i]);
            ctr++;
       }
    }
   for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            arr[i]=arr[i]-1;
            ctr++;
        }
    }
    cout<<ctr<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main() 
{
    int arr[20],n;
    cout<<"Enter number of characters\n";
    cin>>n;
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    zeroarray(arr,n);
    return 0;
}
