// Calculate sum of all possible odd-length sub arrays
// For eg: [1,4,2,5,3]  sum = 1+(1+4+2)+(1+4+2+5+3)+4+(4+2+5)+2+(2+5+3)+5+3 = 58

#include <iostream>
using namespace std;


int main()
{
    int i,j,k,n,s=0;
    int a[100];
    
    cout<<"Enter n ";
    cin>>n;
    
    cout<<"Enter array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++) 
    {
        for(j=i;j<n;j+=2) 
        {
            for(k=i;k<=j;k++)
            {
                s+=a[k];
            }
        }
    }
    
    cout<<"\nSum of all odd length sub array "<<s;
    
    
    return 0;
}
