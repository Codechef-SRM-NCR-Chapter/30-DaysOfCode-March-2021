#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, power, ans;
    cout << "Enter the number till where you want the number of terms of series: "<<endl;
    cin >> n;
    cout << "\n";
    for (i = 1; i <= n; i++)
    {
        power = pow(i, 3);
        ans = power + 2 * i;
        cout << ans << " ";
    }
    return 0;
}
