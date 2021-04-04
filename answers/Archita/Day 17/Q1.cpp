#include <iostream>
using namespace std;
void findquadruple(int arr[],int n,int k)
{
    int i,j,m,l;
    for(i=0;i<=n-3;i++)
    {
        for(j=i+1;j<=n-2;j++)
        {
            int m=k-(arr[i]+arr[j]);
            int low=j+1,high=n-1;
            while(low<high)
            if(arr[low]+arr[high]<m)
            low++;
            else if(arr[low] + arr[high] > m) 
            high--;
            else 
            {
                cout << "(" << arr[i] << " " << arr[j] << " " <<arr[low] << " " << arr[high] << ")\n";
                low++, high--;
            }            
        }
    }
    
}
int main()
{
    int arr[20],n,k;
    cout<<"Enter the number of characters in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target sum\n";
    cin>>k;
    findquadruple(arr,n,k);
    return 0;
}
    