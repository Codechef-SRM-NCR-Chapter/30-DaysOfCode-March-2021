#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the Sum: ";
    cin>>sum;
    
    int ans=0;
    for(i=0;i<n - 2;i++)
    {
       for (int j = i+1; j < n-1; j++)
       {
           for (int k = j+1; k < n; k++)
           {
               if (arr[i] + arr[j] + arr[k] < sum)
               {
                   ans++;
               }
           }
       }
    }
    cout<<"The number of such pairs is :"<<ans;
    return 0;
}
