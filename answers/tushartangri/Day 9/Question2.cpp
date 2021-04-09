#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,sum=0,temp=0;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                temp=0;
                for(int k=i;k<=j;k++)
                {
                    temp=temp+arr[k];
                }
                if(sum<temp)
                sum=temp;
            }
        }
    cout<<"\nLargest sum is "<<sum;
    return 0;
}
