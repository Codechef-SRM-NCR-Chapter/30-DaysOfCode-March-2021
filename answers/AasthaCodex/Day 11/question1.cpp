#include<bits/stdc++.h>
using namespace std;
bool palindrome(string string);
int main(){
    string string = "cdefgtds";
    palindrome(string) ? cout<<"Yes" : cout<<"No";
    return 0;
}
bool palindrome(string string){
    int count[256] = {0};
    for(int i = 0; string[i]; i++){
        count[string[i]]++;
    }
    int ex = 0;
    for(int i = 0; i < 256; i++){
        if(count[i] and 1){
            ex = ex + 1;
        }
        if(ex > 1){
            return false;
        }
    }
    return true;
}
