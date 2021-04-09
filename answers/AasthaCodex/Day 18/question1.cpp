#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 9;
	int count = 0;
	for (int i = 1; i < n; i++){
		for (int j = 1; j * j <= i; j++){
			if (j * j == i){
				count = count + 1;
            }
        }
    }
	cout<<count;
    return 0;
}

