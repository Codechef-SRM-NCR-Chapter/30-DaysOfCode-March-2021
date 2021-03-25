#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, target;
    cout << "enter no of elements in your array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements in your array : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "enter your arr[" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << "enter your target : ";
    cin >> target;
    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "arr[" << i + 1 << "] + arr[" << j + 1 << "] = " << target << " ie. " << arr[i] << " + " << arr[j] << " = " << target << endl;
            }
        }
    }
    return 0;
}
