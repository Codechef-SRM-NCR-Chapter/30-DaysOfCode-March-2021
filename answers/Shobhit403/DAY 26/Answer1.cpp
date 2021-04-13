#include <iostream>
using namespace std;
int* sievealgo()
{
    int* A=new int[100005];
    A[0]=A[1]=1;
    for(long long i=2;i*i<=100004;i++)
    {
        if(A[i]==0)
        {
            for(int j=i*i;j<=100004;j+=i)
            {
                A[j]=1;
            }
        }

    }
    return A;
}
int main()
{
    int n,x,l,r;
    int *A;
    cin>>n;
    A=sievealgo();
    for(int i=0;i<n;i++)
    {
        int count=0;
        cin>>l;
        cin>>r;
        for(int i=l;i<=r;i++)
        {
            if(A[i]==0) count++;
        }
        cout<<(r-l+1-count)*count<<endl;
    }
}
