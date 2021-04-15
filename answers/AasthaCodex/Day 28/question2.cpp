#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> sol(n + 1);
        int number = n;
        for (int i = 2; i < n; i += 2){
            if (k == 0)
                break;
            sol[i] = number--;
            k = k - 1;
        }
        if (k){
            cout << -1 << endl;
            continue;
        }
        int count = 1;
        for(int i = 1; i <= n; i++){
            if (!sol[i])
                sol[i] = count++;
        }
        for (int i = 1; i <= n; i++)
            cout << sol[i] << " "<<cout << endl;
    }
}
