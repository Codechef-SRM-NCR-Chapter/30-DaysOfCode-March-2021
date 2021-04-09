#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
char a, b, c;
cin>>n>>m;
char s[n];
for (int i = 0; i < n; i++) {
    cin>>s[i];
}
int z=0;
int r=0;
while(m--){
  cin>>a>>b>>c;
  int f=c/2;
   if(a=='2'){
       while(f--){
        if(s[b+z-1]==s[c-z-1]){
         r++;
         z++;
        }
      };
       if(r==(c-b))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
  }
   else if(a=='1')
     s[b-1]='x';
};

return 0;
}
