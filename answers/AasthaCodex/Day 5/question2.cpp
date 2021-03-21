#include<bits/stdc++.h>
using namespace std;

bool isPrime(int);

int main(){
   int n = 4, temp, update = 1;
   bool flag;
   for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			temp = isPrime(update);
			if(temp == 1){
            cout<<"# ";
         }
			else {
         cout<<"* ";
      }
		update = update + 1;
	}
	cout<<endl;
	}
   return 0;
}

bool isPrime(int n) {
    bool isPrime = true;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
