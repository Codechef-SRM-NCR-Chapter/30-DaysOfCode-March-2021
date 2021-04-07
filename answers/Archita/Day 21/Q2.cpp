#include <iostream>
using namespace std;
void Sort(int a[], int n) 
{
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) 
    {
        min = i;
        for (j = i + 1; j < n ; j++)
        if (a[j] < a[min])
        min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    int arr[20],n;
    cout<<"Enter no. of elements\n";
    cin>>n;
    cout<<"Enter array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Sort(arr,n);
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        a=a*10+arr[i];
        else
        b=b*10+arr[i];
    }
    
    int c;
    c=a+b;
    cout<<"Sum of 2 minimum numbers :- "<<c;
    return 0;
}