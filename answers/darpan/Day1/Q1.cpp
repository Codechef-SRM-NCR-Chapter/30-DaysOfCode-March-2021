#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i = 1; i <= n+1; i++){

        int p = pow(i, 3);
        int result = p + 2*i;
        cout<<result<<" ";
    }

    return 0;
}
