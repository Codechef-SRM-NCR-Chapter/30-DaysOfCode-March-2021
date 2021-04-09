#include <iostream>
using namespace std;
int numberOfPaths(int m, int n)
{
    if (m == 2 || n == 2)
        return 1;
  return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
}
int main()
{
    cout << numberOfPaths(3, 3);
    return 0;
}
