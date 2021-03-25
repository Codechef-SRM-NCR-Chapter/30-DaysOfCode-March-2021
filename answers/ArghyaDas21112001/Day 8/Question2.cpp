#include <iostream>
using namespace std;
int min(int a,int b)
{
    return  a <  b  ? a : b ;
}
int main() 
{
    int arr[10],n,c=0,temp=0,j,i;
    cout<<"Enter the no. of even elements in the array: "<<endl;
    cin>>n;
    if(n%2==0 && n>2)
    {
        cout<<"Enter the elements of array: "<<endl;
        for(int m=0;m<n;m++)
        {
            cin>>arr[m]; 
        }
    }
    else
    cout<<"Please enter even length of array and greater than 2\n";
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
    cout<<"Maximum of the sum of minimum of pair is "<<c;
    return 0;
}
