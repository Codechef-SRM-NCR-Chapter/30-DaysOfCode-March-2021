// Count all possible paths from top left to bottom right of a m*n matrix

#include <iostream>
using namespace std;
  

int func(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
        
    return func(m - 1, n) + func(m, n - 1);
}
  
int main()
{
    int m,n;
    
    cout<<"Enter the value of m and n ";
    cin>>m>>n;
    
    cout<<func(m,n);
    return 0;
}
