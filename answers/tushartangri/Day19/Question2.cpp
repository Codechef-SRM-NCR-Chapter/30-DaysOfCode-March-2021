#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,sum,temp=0;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    cout<<"Enter the sum\n";
    cin>>sum;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if (arr[i] + arr[j] + arr[k] < sum)
                cout << arr[i] <<"," << arr[j] <<","<< arr[k] <<'\n';
            }
        }
    }
    return 0;
}
