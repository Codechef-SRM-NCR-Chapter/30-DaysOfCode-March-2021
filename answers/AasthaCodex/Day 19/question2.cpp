#include<bits/stdc++.h>
using namespace std;
int ThreeofCount(int arr[], int n, int alred);
int main()
{
	int arr[] = {-2, 0, 1, 3};
	int n = 4;
	int alred = 2;
	cout<<ThreeofCount(arr, n, alred) << endl;
	return 0;
}
int ThreeofCount(int arr[], int n, int alred)
{
	int total = 0;
	for (int a = 0; a < n-2; a++){
	    for (int b = a+1; b < n-1; b++){
		    for (int c = b+1; c < n; c++)
			    if (arr[a] + arr[b] + arr[c] < alred)
				    total = total + 1;
	        }
	    }

	return total;
}

