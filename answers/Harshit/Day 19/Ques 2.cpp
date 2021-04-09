#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,j,k;
    int sum=0;
      cin>>n>>x;
    int a[n];
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
                    sum++;
                }
            }
        }
    }
    cout<<sum;

    return 0;
}
