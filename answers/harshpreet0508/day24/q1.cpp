// Find the minimum number of moves required to convert the given array into array of zeroes

#include <iostream>
using namespace std;

int count(int a[], int n)
{
    int min = 0;
    while (1)
    {
        int nz = 0;
        for (int i=0;i<n;i++)
        {
            
            if (a[i] % 2 == 1)
            {
                --a[i];
                ++min;
            }
            if (a[i] == 0) {
                nz++;
            }
        }
        if (nz == n) 
            break;
        for (int j=0;j<n;j++) 
            a[j] = a[j] / 2;
        min++;
    }
    return min;
}
 
int main(void)
{
    int n,i;
    cout<<"Enter n ";
    cin>>n;
    
    int a[n];
    cout<<"Enter array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"The minimum moves required is "<<count(a,n);
 
    return 0;
}
