#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,sum=0,i;
    cout<<"enter the number of elements in array";
    cin>>n;
    cout<<"\nEnter each element\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i]; 
    }
    sum=sum*2; 
    i=0;
    while((i+2)<n)
    {
        sum=sum+arr[i]+arr[i+1]+arr[i+2]; 
        i++;
    }
    cout<<"Sum of subarrays is "<<sum;
}
