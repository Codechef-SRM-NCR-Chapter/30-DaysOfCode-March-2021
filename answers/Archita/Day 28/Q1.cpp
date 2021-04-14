#include <iostream>
using namespace std;

int main() 
{
    int n,arr[20],sum;
    cout<<"Enter n\n";
    cin>>n;
    sum=(n*(n+1))/2;
    if(sum%2==0)
    {
        cout<<"Yes";
        for(int i=1;i<=n;i++)
        {
            arr[i-1]=i;
        }
        int s=0,half,i;
        half=sum/2;
        for(i=0;i<n;i++)
        {
            if(s>=half)
            break;
            s=s+arr[i];
        }
        cout<<"\n";
        {
            int rem=s-half,ctr1=0,ctr2=0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]!=rem)
                {
                    ctr1++;
                    cout<<arr[j]<<" ";
                }
            }
            cout<<"\n"<<ctr1<<"\n";
            if(rem>0)
            cout<<rem<<" ";
            for(int j=i;j<n;j++)
            {
                ctr2++;
                cout<<arr[j]<<" ";
            }
            cout<<"\n"<<ctr2;
        }
    }
    else 
    cout<<"No";
    return 0;
}

