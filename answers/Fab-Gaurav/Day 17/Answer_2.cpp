#include <bits/stdc++.h>
using namespace std;

/*
void subArr(int arr[],int i,int j)
{
    for(int k=i;k<=j;k++)
    cout<<arr[k]<<" ";
    cout<<'\n';
}
*/

int main()
{
    int n, arr[20], sum=0, cnt=0;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum=arr[j]+sum;
            if(sum==0)
            {
                cnt++;
                /*
                subArr(arr,i,j);              //This function will display the sub arrays
                */
            }
        }
    }
    cout<<"Total sub arrays are : "<<cnt;
    
    if(cnt==0)
        cout<<"No such array";
    return 0;
}