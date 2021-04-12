#include <bits/stdc++.h>
using namespace std;
int countMinOperations(unsigned int target[], int n)
{
    int result = 0;
    while (1)
    {
        int zero_count = 0;
        int i;  
        for (i=0; i<n; i++)
        {
            if (target[i] & 1)
                break;
            else if (target[i] == 0)
                zero_count++;
        }
        if (zero_count == n)
          return result;
        if (i == n)
        {
            for (int j=0; j<n; j++)
               target[j] = target[j]/2;
            result++;
        }
        for (int j=i; j<n; j++)
        {
           if (target[j] & 1)
           {
              target[j]--;
              result++;
           }
        }
    }
}
int main()
{
    unsigned int arr[] = {7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countMinOperations(arr, n);
    return 0;
}
