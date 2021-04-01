#include <bits/stdc++.h>
using namespace std;

int pp(int m, int n){
    if (m == 1 || n == 1)
        return 1;
    return pp(m - 1, n) + pp(m, n - 1);
}

int main(){
    int m, n;
    cout<<"Enter the value for m & n : ";
    cin>>m>>n;
    cout<<"Possible Paths : "<<pp(m, n);
    return 0;
}
