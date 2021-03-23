#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,n,j,k=2;
    cin>>n;
    for(i=1;i<=n;i++){
        j=pow(i,3)+k;
        k=k+2;
        cout<<j<<",";
    }

    return 0;
}
