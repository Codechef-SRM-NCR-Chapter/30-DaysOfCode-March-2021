#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void solve(int A[], int B[], int n, int m, int i, int j)
{
	if(i == n && j == m)
		return;
	if(i == n)
	{
		v.push_back(B[j]);
		solve(A, B, n, m, i, j + 1);
	}	
	if(j == m)
	{
		v.push_back(A[i]);
		solve(A, B, n, m, i + 1, j);
	}
	else
	{
		v.push_back(A[i] + B[j]);
		solve(A, B, n, m, i + 1, j + 1);
	}
}
int main() 
{
	int A[] = { 23, 5, 2, 7, 87 };
	int B[] = { 4, 67, 2, 8 };
	solve(A, B, 5, 4, 0, 0);
	for(int x : v)
		cout << x << " ";
	return 0;
}
