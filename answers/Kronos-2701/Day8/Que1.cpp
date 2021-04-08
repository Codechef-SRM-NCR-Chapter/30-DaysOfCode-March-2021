#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int arr[n];
    bool check[n]={0};
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    { 
        cout<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]){check[arr[i]]=1;}
        }
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==0){x=x+i;}
    }
    cout<<"The sum of non repeating elements is : "<<x;
    return 0;
}