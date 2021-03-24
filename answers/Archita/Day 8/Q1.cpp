#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,sum=0;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    for(int i=0;i<n;i++)
        {
            int m=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                    m++;
            }
            if(m<2)
            sum=sum+arr[i];
        }
    cout<<"\nSum of unique elements is "<<sum;
    return 0;
}
