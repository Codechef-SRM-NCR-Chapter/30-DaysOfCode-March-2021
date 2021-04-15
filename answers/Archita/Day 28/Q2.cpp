#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter number of test cases\n";
    cin >> t;
    while (t--)
    {
        int n, k;
        cout<<"Enter length of array and number of peaks\n";
        cin >> n >> k;
        vector<int> arr(n + 1);
        int number = n;
        for (int i = 2; i < n; i += 2){
            if (k == 0)
                break;
            arr[i] = number--;
            k = k - 1;
        }
        if (k){
            cout << -1 << endl;
            continue;
        }
        int ctr = 1;
        for(int i = 1; i <= n; i++){
            if (!arr[i])
                arr[i] = ctr++;
        }
        for (int i = 1; i <= n; i++)
            cout << arr[i] <<" \n";
    }
}
