#include <iostream>
using namespace std;

int main()
{
    int arr[20],n,move=0,i;
    cout<<"Enter number of integers ";
    cin>>n;
    cout<<"Enter the elements of array ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=1;i<n;i++)
    {
        while(arr[i]<arr[i-1])
        {
            arr[i] = arr[i] + 1;
            move++;
        }
    }
    cout<<"\nNumber of moves "<<move;
    return 0;
}