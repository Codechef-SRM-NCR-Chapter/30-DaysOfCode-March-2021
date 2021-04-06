#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
         cin>>a;
         int p=a.size();
         char ar[p];
         int z=0;
        for(int i=0;i<p;i++){
            if(a[i]!=a[i+1]){
             ar[z]=a[i];
             z++;
            }
          }
        cout<<z<<endl;
        for (int l = 0; l < z; l++) {
            cout<<ar[l];
        }
        cout<<endl;
    };
    return 0;
}
