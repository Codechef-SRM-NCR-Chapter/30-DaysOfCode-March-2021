#include<bits/stdc++.h>
using namespace std;
int countMoves(int array[], int n);
int main(){
    int array[] = { 7, 8, 9 };
    int len = 3;
 	cout<<countMoves(array, len);
 	return 0;
}
int countMoves(int array[], int n){
    int letsmovee = 0;
    while (1){
        int zeroes = 0;
        for (int i = 0; i < n; i++){
            if (array[i] % 2 == 1){
                --array[i];
                ++letsmovee;
            }
            if (array[i] == 0){
                zeroes = zeroes + 1;
            }
        }
        if (zeroes == n){
            break;
        }
        for (int j = 0; j < n; j++){
            array[j] = array[j] / 2;
        }
        letsmovee = letsmovee + 1;
    }
    return letsmovee;
}


