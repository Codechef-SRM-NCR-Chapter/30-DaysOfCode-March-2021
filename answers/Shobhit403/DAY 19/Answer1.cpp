#include <iostream>
using namespace std;
void getMissingAndRepeating(int arr[], int n)
    {
       int xors = 0;
       int i;
       int x = 0;
       int y = 0;
       for(i=0; i<n; i++)
          xors = xors ^ arr[i];
       for(i=1; i<=n; i++)
          xors = xors ^ i;
       int setBitNum = xors & ~ (xors-1);
       for(i = 0; i < n; i++)
       {
          if(arr[i] & setBitNum)
               x = x ^ arr[i]; 
          else
               y = y ^ arr[i];  
       }
       for(i = 1; i <= n; i++)
       {
          if(i & setBitNum)
              x = x ^ i;  
          else
              y = y ^ i;  
       }
       cout << "Repeating Number : "<< x << std::endl
            << "Missing Number : "<< y;
    }
    int main()
    {
       int arr[3] = {1, 3, 3};
       getMissingAndRepeating(arr, 3);
       return (0);
    }
