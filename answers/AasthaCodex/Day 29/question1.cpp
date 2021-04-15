#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,x;
        cin>>n>>x;
        int a[n];
        int b[n];
        for (int j = 0; j < n; ++j) {
            cin>>a[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>b[n-j-1];
        }
        bool Possible = true;
        for (int j = 0; j < n; ++j) {
            if (a[j]+b[j]>x){
                Possible = false;
                cout<<"No"<<endl;
                break;
            }
        }
        if (Possible){
            cout<<"Yes"<<endl;
        }
    }
}
