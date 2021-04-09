#include<bits/stdc++>
using namespace std;

int main()
{
	int a[] = {4, -1, 2, 1};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = INT_MIN, max_end = 0;

	for (int i = 0; i < n; i++)
	{
		max_end = max_end + a[i];
		if (max_sum < max_end)
			max_sum = max_end;

		if (max_end < 0)
			max_end = 0;
	}
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
