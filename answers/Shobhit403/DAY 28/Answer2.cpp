#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> val(x + 1);
        int number = x;
        for (int i = 2; i < x; i += 2)
        {
            if (y == 0)
                break;
            val[i] = number--;
            y = y - 1;
        }
        if (y)
        {
            cout << -1 << endl;
            continue;
        }
        int cnt = 1;
        for(int i = 1; i <= x; i++)
        {
            if (!val[i])
                val[i] = cnt++;
        }
        for (int i = 1; i <= x; i++)
            cout << val[i] << " " << endl;
    }
}
