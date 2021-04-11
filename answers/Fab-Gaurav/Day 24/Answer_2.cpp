#include <bits/stdc++.h>
using namespace std;

void countMoves(int arr[], int n)
{
    int move = 0;
    while(1)
    {
        int numZero = 0;
        for (int i=0; i<n; i++)
        {
            if (arr[i] % 2 == 1){
                --arr[i];
                ++move;
            }
            
            if (arr[i] == 0){
                numZero++;
            }
        }
        
        if (numZero == n) 
            break;
            
        for (int j=0; j<n; j++){
            arr[j] = arr[j]/2;
        }
        
        move++;
    }
    cout<<"The minimum moves required is : "<<move;
    return;
}

int main(void)
{
    int n, i, arr[n];
    cout<<"Enter the elements in the array : ";
    cin>>n;
    
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    countMoves(arr, n);

    return 0;
}
