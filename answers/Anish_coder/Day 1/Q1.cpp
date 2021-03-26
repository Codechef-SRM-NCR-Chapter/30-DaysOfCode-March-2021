#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number till where you want the number of terms of series";
    cin >> n;
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        int power = pow(i, 3);
        int ans = power + 2 * i;
        cout << ans << " ";
    }
    return 0;
}
