#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j, sum = 0, s = 0;
    cout<<"Enter n = ";
    cin>>n;
    for(i = 1; i <= n; i++){
        s=(s*10)+i;
        sum=sum+s;
    }
    cout<<sum;
    return 0;
}
