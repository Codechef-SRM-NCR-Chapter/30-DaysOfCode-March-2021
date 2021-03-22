#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        for (int j = i; j < size; j += 2)
        {
            for (int k = i; k <= j; k++) 
            {
                sum += arr[k];
            }
        }
    }
    cout<<"Sum is : "<<sum;
    return 0;
}
