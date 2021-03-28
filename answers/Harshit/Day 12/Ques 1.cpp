#include <bits/stdc++.h>
using namespace std;
int main(){
int t,a;
int s=0;
cin>>t;
while(t--){
 cin>>a;
 char arr[a];
 for (int i = 0; i < a; i++) {
     cin>>arr[i];
 }
 for (int j = 0; j < a; j++) {
      for (int p = j; p < a; p++) {
          if(arr[j]=='1' && arr[p]=='1'){
           s++;
          }
      }
 }
 cout<<s<<endl;
 s=0;
};

return 0;
}
