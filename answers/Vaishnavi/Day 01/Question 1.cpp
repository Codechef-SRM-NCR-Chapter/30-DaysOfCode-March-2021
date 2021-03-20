#include <iostream>

using namespace std;

int main()
{
    int n,i,a;
    cout<<"Enter a positive number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a=(i*i*i)+(2*i);
        cout<<a<<" ";
    }
    return 0;
}
