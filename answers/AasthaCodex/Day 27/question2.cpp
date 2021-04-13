#include <bits/stdc++.h>
using namespace std;
int main(){
    string strriinng;
    cin >> strriinng;
    long long len;
    cin >> len;
    long long ans = 0;
    ans = len / strriinng.size() * count(strriinng) + count(strriinng.substr(0, len % strriinng.size()));
    cout << ans;
    return 0;
}
long long count(string const &strriinng){
  long long sollll = 0;
  for (const char &c : strriinng) {
    sollll += c == 'a';
  }
  return sollll;
}
