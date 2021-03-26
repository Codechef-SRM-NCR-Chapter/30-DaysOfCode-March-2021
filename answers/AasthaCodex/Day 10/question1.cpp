#include<bits/stdc++.h>
using namespace std;
bool Pangram(string string){
 
    vector<bool>mode(26, false);
    int total = 0;
    int length = string.length();
    for (int i = 0; i < length; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            total = string[i] - 'A';
        }
        else if(string[i] >= 'a' && string[i] <= 'z'){
            total = string[i] - 'a';
        }
        mode[total] = true;
    }
    for (int i = 0; i <= 25; i++)
        if (!mode[i])return false;
    return true;
}

int main(){
 
    string str = "Pack my box with five dozen liquor jugs";
    
    if (Pangram(str)){
        cout<< "Pangram"<< endl;
    }
    else{
        cout<< "Not Pangram"<< endl;
    }
    return 0;
}
