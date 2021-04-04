// output the no of perfect squares less than the given no.

#include <iostream>
using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i*i<n)
            c++;
    }
    cout<<c;
    return 0;
}
