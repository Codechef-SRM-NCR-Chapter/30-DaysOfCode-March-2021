#include <bits/stdc++.h>
using namespace std;
int main(){
 string c;
 cin>>c;
 int s=0;
 for(int i=0;i<c.length();i++){
  for (int j = i+1; j< c.size(); j++) {
     if(c[i]==c[j])
      s++;
  }
 }
 if(s%2==0)
  cout<<"YES";
 else
  cout<<"NO";
return 0;
}
