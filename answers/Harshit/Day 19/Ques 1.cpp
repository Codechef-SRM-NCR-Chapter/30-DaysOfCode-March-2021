#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=1;
      cin>>n;
   int a[n];
    cout<<"Enter Elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);

    for(int j=0;j<n;j++)
    {
        if(a[j]==a[j+1])
            cout<<a[j]<<" ";
    }

    for(int k=0;k<=n;k++)
    {
        if(a[k]==p)
          p++;
      else
          cout<<p<<' ';
    }

    return 0;
}
