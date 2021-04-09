#include <bits/stdc++.h>
using namespace std;
int findme(int *array, int n);
int main()
{
    int n;
    int array[100];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    int ans = findme(array, n);
    cout <<ans<< endl;
    return 0;
}
int findme(int *array, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int between = (start + end) / 2;
        if (array[between] == 0)
            start = between + 1;
        else if (array[between] == 1)
        {
            if (between == 0 || (between > 0 && array[between - 1] == 0))
                return between;
            end = between - 1;
        }
    }
    return -1;
}
