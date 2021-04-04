#include <bits/stdc++.h>
using namespace std;
int countNumbers(int N)
{
    return int(sqrt(N)) - 1;
}
int main()
{
    int N = 9;
    cout << countNumbers(N);
    return 0;
}
