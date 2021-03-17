// Question 1A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    int pre = 0;
    for (int x = 1; x <= n; x++)
    {
        if (x != n)
        {
            cout << (pow(x, 3)) + (pre + 2) << ", ";
            pre = pre + 2;
        }
        else
        {
            cout << (pow(x, 3)) + (pre + 2);
            pre = pre + 2;
        }
    }
    return 0;
}





//Question 1B



#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 4; x++)
    {
        for (int y = x; y <= 3; y++)
        {
            cout << "    ";
        }

        for (int z = 1; z <= x; z++)
        {
            cout << "*   ";
        }
        cout << endl;
    }

    return 0; 
}
