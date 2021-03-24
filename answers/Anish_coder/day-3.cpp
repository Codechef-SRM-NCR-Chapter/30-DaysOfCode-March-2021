#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n, f = 0;
    cout << "Enter the number of terms of series:"<<endl;
    cin >> n;
    cout << '\n';
    for (int i = 1; i <= n; i++)
    {

        sum = (sum * 10) + i;
        f = f + sum;
        if (i < n)
            cout << sum << "+";
        else
            cout << sum;
    }
    cout << "\nFinal sum is " << f;
    return 0;
}
