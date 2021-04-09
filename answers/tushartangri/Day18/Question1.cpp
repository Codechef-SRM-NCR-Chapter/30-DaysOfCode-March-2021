#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,ctr=-1;
    cout<<"Enter the number N\n";
    cin>>n;
    int l=sqrt(n);
    int r;
    r=l%10;
    for(int i=0;i<r;i++)
    ctr++;
    cout<<"Integers less than N in the sample space is "<<ctr;
    return 0;
}
