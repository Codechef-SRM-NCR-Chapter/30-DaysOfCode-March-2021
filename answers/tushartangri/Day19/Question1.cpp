#include <iostream>
using namespace std;
int repeated(int arr[],int n)
{
    int a;
    for(int i=0;i<n;i++)
    {
        a=arr[i];
        for(int j=i+1;j<n;j++)
        if(a==arr[j])
        return a;
    }
}
int missing(int arr[],int n,int B)
{
    int a,sum,total=0;
    sum=((n)*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        total=total +arr[i];
    }
    total=total-B;
    a=sum-total;
    return a;
}
int main() 
{
    int arr[10],n,A,B;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    B=repeated(arr,n);
    A=missing(arr,n,B);
    cout<<"repeated number is "<<B<<"\nmissing number is "<<A;
    return 0;
}
