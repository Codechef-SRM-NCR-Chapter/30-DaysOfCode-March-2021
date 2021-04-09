#include <iostream>
using namespace std;
long int removeRecur(long int n)
{
    int prev_digit = n % 10;
    long int pow = 10;
    long int res = prev_digit;
    while (n) 
    {
        int curr_digit = n % 10;
        if (curr_digit != prev_digit) 
        {
            res += curr_digit * pow;
            prev_digit = curr_digit;
            pow *= 10;
        }
        n = n / 10;
    }
    return res;
}
int main()
{
    long int n = 12224;
    cout << removeRecur(n);
    return 0;
}
