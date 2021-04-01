#include <iostream>
using namespace std;
int possiblepaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return possiblepaths(m - 1, n) + possiblepaths(m, n - 1);
}
int main()
{
    int m, n;
    cout<<"Enter m & n\n";
    cin>>m>>n;
    int out;
    out=possiblepaths(m,n);
    cout<<"possible paths are "<<out;
    return 0;
}
    