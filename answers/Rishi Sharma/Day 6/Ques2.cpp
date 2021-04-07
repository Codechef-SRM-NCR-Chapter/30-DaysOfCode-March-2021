#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[100], sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j+=2)
        {
            for(int k=i; k<=j; k++)
                {
                    sum += a[k];
                }
        }

    }
    cout<<sum;
    return 0;
}