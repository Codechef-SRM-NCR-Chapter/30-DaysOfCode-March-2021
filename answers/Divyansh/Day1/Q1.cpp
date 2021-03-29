#include <iostream>
using namespace std;


int main() {
    int n,x=2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<(i*i*i)+x<<" ";
        x+=2;
    };

    return 0;
}
