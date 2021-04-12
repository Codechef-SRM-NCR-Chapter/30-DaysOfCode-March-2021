#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int primenum[MAX + 1];
int multiply(int a, int b);
void Primeee();
int main(){
	int arrrzz[][2] = { { 5, 11 }, { 5, 10 } };
	int len = sizeof(arrrzz) / sizeof(arrrzz[0]);
    Primeee();
	for(int i = 0; i < len; i++)
		cout <<multiply(arrrzz[i][0], arrrzz[i][1])<< endl;
    return 0;
}
void Primeee(){
	for (int i = 2; i <= MAX; i++) {
		primenum[i] = 1;
	}
	primenum[0] = primenum[1] = 0;
	for (int i = 2; i * i <= MAX; i++){
		if (primenum[i] == 1){
			for (int j = i * i; j <= MAX; j += i){
				primenum[j] = 0;
			}
		}
	}
	for (int i = 1; i <= MAX; i++){
		primenum[i] += primenum[i - 1];
	}
}
int multiply(int a, int b)
{
	int total = a - b + 1;
	int prime = primenum[a] - primenum[b - 1];
	int composite = total - prime;
	return (prime * composite);
}

