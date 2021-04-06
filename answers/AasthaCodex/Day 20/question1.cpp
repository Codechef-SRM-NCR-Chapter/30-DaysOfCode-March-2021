#include <bits/stdc++.h>
using namespace std;
int main(){
    
  string str = "12224";
  int length = str.length();
  int a = 1, b = 1;

  while(a < length){
    if (str[a] != str[a - 1]){
      str[b] = str[a];
      b = b + 1;;
      a = a + 1;
    }
    
    while(str[a] == str[a - 1]){
        a = a + 1;
    }
  }
  str.resize(b);
  cout<<str;
}
