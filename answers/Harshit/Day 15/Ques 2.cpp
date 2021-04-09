#include <iostream>
using namespace std;

int Count(int m, int n)
{
    if (m == 1 || n == 1)
    {
        return 1;
    }
    return Count(m - 1, n) + Count(m, n - 1);
}
int main()
{
    int m,n;
    cout << "Enter value of m: " << endl;
    cin >> m;
    cout << "Enter value of n: " << endl;
    cin >> n;
    int count = Count(m, n);
    cout << count;
    return 0;
}
