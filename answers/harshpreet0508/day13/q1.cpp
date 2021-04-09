// Sum of digits of Number using recursion

#include <iostream>
using namespace std;

int sum(int n)
{
    if(n < 10) return n;
    return n % 10 + sum(n/10);
}

int main()
{
    int n;
    
    cout<<"Enter a number ";
    cin>>n;
    
    cout<<"\nSum of digits ";
    cout<<sum(n);
    return 0;
}
