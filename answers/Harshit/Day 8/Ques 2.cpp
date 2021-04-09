#include <iostream>
using namespace std;
int min(int a,int b)
{
    int c=a;
    if(b<a)
    c=b;
    return c;
}
int main() 
{
    int arr[10],n,c=0,temp=0,j,i;
    cout<<"Enter the no. of elements(even) in array\n";
    cin>>n;
    if(n%2==0&&n>2)
    {
        cout<<"Enter the elements of array\n";
        for(int m=0;m<n;m++)
        {
            cin>>arr[m]; 
        }
    }
    
    c=temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            temp=min(arr[i],arr[j])+min(arr[i+1],arr[j+1]);
        }
        if(j+1<n)
        break;
        if(c<temp)
        c=temp;
    }
    cout<<"max of sum of min of pair is "<<c-1;
    return 0;
}
