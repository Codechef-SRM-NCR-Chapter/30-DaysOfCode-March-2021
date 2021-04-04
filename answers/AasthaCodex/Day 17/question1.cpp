#include<bits/stdc++.h>
using namespace std;
int main(){

    int array[] = {0, 0, 2, 1, 1};
    int sum = 3;
    int n = 5;
    sort(array, array + n);
    for (int i = 0; i <= n - 4; i++){
        for (int j = i + 1; j <= n - 3; j++){
           int k = sum - (array[i] + array[j]);     
            int start = j + 1, end = n - 1;
            while (start < end){
                if(array[start] + array[end] < k){
                    start = start + 1;
                }
                else if(array[start] + array[end] > k){
                    end = end - 1;
                }
                else{
                    cout<<array[i]<<" "<<array[j]<<" "<<array[start]<<" "<<array[end]<<endl;
                    start++, end--;
                }
            }
        }
    }
    return 0;
}
