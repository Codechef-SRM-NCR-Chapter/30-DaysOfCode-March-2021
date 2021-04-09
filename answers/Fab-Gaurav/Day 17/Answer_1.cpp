#include<bits/stdc++.h>
using namespace std;

void uniQuad(int arr[], int n, int k)
{
    int m, l, h;
    for(int i=0; i<=n-3; i++)
    {
        for(int j=i+1; j<=n-2; j++)
        {
            int m=k-(arr[i]+arr[j]);
            l=j+1;
            h=n-1;
            while(l<h)
            {
                if(arr[l] + arr[h] < m){
                    l++;
                }
                else if(arr[l] + arr[h] > m){
                    h--;
                }
                else{
                    cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[l]<<", "<<arr[h]<<")";
                    l ++;
                    h --;
                }
            }            
        }
    }
}

int main()
{
    int n, k, arr[20];
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the target sum : ";
    cin>>k;
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unique quadruple is : ";
    uniQuad(arr, n, k);
    return 0;
}