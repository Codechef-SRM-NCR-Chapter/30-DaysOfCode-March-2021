#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the number of kids" << endl;
    cin >> a;
    int candies[a];
    string answer[a];

    for (int x = 0; x < a; x++)
    {
        cout << "Enter number of candies kid " << (x + 1) << " has" << endl;
        cin >> candies[x];
    }

    cout << "Enter the number of extra candies" << endl;
    cin >> b;

    int greatest = candies[0];
    for (int x = 0; x < a; x++)
    {
        if (candies[x] > greatest)
        {
            greatest = candies[x];
        }
    }

    for (int x = 0; x < a; x++)
    {
        if (candies[x] + b < greatest)
        {
            answer[x] = "False";
        }
        else
        {
            answer[x] = "True";
        }
    }

    for (int x = 0; x < a; x++)
    {
        if (x == 0)
        {
            cout << "[" << answer[x] << " , ";
        }
        else if (x == a - 1)
        {
            cout << answer[x] << "]";
        }
        else
        {
            cout << answer[x] << " , ";
        }
    }

    return 0;
}
