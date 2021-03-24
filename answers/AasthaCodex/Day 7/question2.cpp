#include<bits/stdc++.h>
using namespace std;

void findtriplets(int arr[], int n, int sum){
    for (int i = 0; i < n-2; i++){
        for (int j = i + 1; j < n-1; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == sum){
                    cout << arr[i] << "," << arr[j] << "," << arr[k] <<endl;
                }
            }
        }
    }
}
int main(){
    int n, sum;
    cout <<"Enter the number of elements = "<<endl;
    cin >> n;
    int arr[n];
    cout <<"Input the array elements = "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"Enter the sum value = "<<endl;
    cin >> sum;
    cout <<"Triplets = "<<endl;
    findtriplets(arr, n, sum);
    return 0;
}
