#include <iostream>
using namespace std;
void displayarray(int arr[],int i,int j)
{
    for(int k=i;k<=j;k++)
    cout<<arr[k]<<" ";
    cout<<'\n';
}
int main()
{
    int arr[20],n,sum=0,i,j,ctr=0;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)//start
    {
        sum=0;
        for(j=i;j<n;j++)//end
        {
            sum=arr[j]+sum;
            if(sum==0)
            {
                ctr++;
                displayarray(arr,i,j);
            }
        }
        
    }
    if(ctr==0)
    cout<<"No such array";
    return 0;
}
