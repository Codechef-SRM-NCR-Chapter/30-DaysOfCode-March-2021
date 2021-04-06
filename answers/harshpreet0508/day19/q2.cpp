// Find triplets with sum ;less than given no

#include <iostream>

using namespace std;

int main()
{
    int n,x,i,j,k,c=0;
    cout<<"Enter n and x ";
    cin>>n>>x;
    
    int a[n];
    cout<<"Enter Array ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i] + a[j] + a[k] < x)
                {
                    c++;
                }
            }
        }
    }
    cout<<"\nNo of triplets with sum less than x are "<<c;

    return 0;
}
