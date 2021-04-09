#include <bits/stdc++.h>
using namespace std;
int main(){
 string c;
 string b;
 cin>>c;
 int s=0,t;
 cin>>t;
 int p=0;
 while(t--){
  cin>>b;
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
          if(c[i]==b[j]){
            i++;
            p++;
           }
        
    if(p==b.size())
    s++;
        }
    }
    cout<<s<<endl;
    
    s=0;
    p=0;
};

return 0;
}
