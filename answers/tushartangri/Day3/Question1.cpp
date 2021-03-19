#include <iostream>
using namespace std;
int main() {
    int n,i,sum=0,fs=0;
    cin >> n;
    for(i = 1; i<= n; i++){
        sum = sum*10 + i;
        fs = fs + sum; 
    }
    cout << fs;
    return 0;
}
