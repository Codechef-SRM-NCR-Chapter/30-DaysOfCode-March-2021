// find quadruple from given array that sums up to given no

#include <iostream>
using namespace std;
 
void quad(int a[],int n,int K)
{
    int i,j,k,l;
    for(i=0;i<n-3;i++)
    {
        for(j=i+1;j<n-2;j++)
        {
            for(k=j+1;k<n-1;k++)
            {
                for(l=k+1;l<n;l++)
                {
                    if(a[i]+a[j]+a[k]+a[l]==K)
                    {
                        cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<' '<<a[l];
                    }
                }
            }
        }
    }
}

int main()
{
    int a[10];
    int n,K,i;
    cin>>n;
    cin>>K;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quad(a,n,K);
    return 0;
}
