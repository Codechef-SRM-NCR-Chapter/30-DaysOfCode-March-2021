#include<bits/stdc++.h>
using namespace std;
void reverse(string &rev);
int main(){
    string rev = "HelloWorld";
    reverse(rev);
    cout<<rev;
    return 0;
}
void reverse(string &rev){
    stack<int> str;
    for(char ch: rev){
        str.push(ch);
    }
    for(int i = 0; i < rev.length(); i++){
        rev[i] = str.top();
        str.pop();
    }
}
