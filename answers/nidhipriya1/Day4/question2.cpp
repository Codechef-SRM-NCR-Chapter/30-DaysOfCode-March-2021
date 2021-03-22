#include <iostream>
using namespace std;

int main()
{
    int  number = 1;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }

    return 0;
}
