#include<bits/stdc++.h>
using namespace std;
int main(){

    int array[] = {6, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = 10;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += array[j];
            if (sum == 0) {
                cout<< i << "..." <<j<<endl;;
            }
        }
    }
    return 0;
}
