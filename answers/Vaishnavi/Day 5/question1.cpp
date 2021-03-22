#include <iostream>

using namespace std;

int main()
{
    long long int i,a=0,b=1,c;
    for(i=1;i<=50;++i)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
