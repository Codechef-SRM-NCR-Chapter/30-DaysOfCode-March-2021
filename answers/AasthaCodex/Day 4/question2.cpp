#include<bits/stdc++.h>
using namespace std;
int main(){
    int input = 4, value = 1;
    for(int i = 1; i <= input; i++){
        for(int j = 1; j <= i; j++){
            cout<<value<<" ";
            value =  value + 1;
        }
        cout<<endl;
    }
    return 0;
}
