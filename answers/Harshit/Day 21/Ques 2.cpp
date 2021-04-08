#include <iostream>
#include<algorithm>
using namespace std;
int calSum(int a[], int b[], int z)
{
	int sum[z];

	int i = z - 1, j = z- 1, k = z - 1;

	int carry = 0, s = 0;

	while (j >= 0) {
		s = a[i] + b[j] + carry;
		sum[k] = (s % 10);

		carry = s / 10;

		k--;
		i--;
		j--;
	}

	while (i >= 0) {

		s = a[i] + carry;
		sum[k] = (s % 10);
		carry = s / 10;

		i--;
		k--;
	}

	int ans = 0;

	if (carry)
		ans = 10;

	for (int i = 0; i <= z - 1; i++) {
		ans += sum[i];
		ans *= 10;
	}

	return ans / 10;
}


int main()
{   int n;
    cin>>n;
    int num[n];
    int z=n/2;
    int a[z] ;
	int b[z] ;
	int p=0;
    for (int i = 0; i < n; i++) {
       cin>>num[i];
    }
    sort(num,num+n);
    for (int j = 0; j < n; j+2) {
        a[p]=num[j];
        b[p]=num[j+1];
        p++;
    }
	
    cout <<calSum(a, b,z) << endl;
    
	return 0;
}

