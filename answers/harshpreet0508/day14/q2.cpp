// Given 2 arrays of +ve integers, add their elements into new array using recursion
// Eg: A = [23,5,2,7,87]  B = [4,67,2,8] --> [27,72,4,15,87]

#include<iostream>
using namespace std;

int c[10],k=0;

void sum(int a[],int b[],int n1,int n2,int i,int j)
{
    if(i == n1 && j == n2)
        return;
        
    if(i == n1)
    {
      c[k++] = b[j++];
      sum(a,b,n1,n2,i,j);
    }
    
    if(j == n2)
    {
        c[k++] = a[i++];
        sum(a,b,n1,n2,i,j);
    }
    
    else
    {
        c[k++] = a[i++] + b[j++];
        sum(a,b,n1,n2,i,j);
    }
    
}

int main()
{
    int i,n1,n2;
    int a[10],b[10];
    
    cout<<"Enter no of elements 1st array ";
    cin>>n1;
    
    cout<<"Enter 1st array ";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter no of elements 2nd array ";
    cin>>n2;
    
    cout<<"Enter 2nd array ";
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    
    sum(a,b,n1,n2,0,0);
    
    cout<<"\n\nSum of arrays ";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<' ';
    }
    
    return 0;
}
