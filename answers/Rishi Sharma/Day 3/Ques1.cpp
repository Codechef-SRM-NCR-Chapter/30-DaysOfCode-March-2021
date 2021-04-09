#include<iostream>

using namespace std;

int main()
{
    int n, s=0, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        s = s*10 + i;
        sum += s;
        cout<<s<<" ";
    }
    cout<<endl<<"Sum is => "<<sum;
    return 0;
}