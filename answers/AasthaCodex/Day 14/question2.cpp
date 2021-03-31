#include <iostream>
using namespace std;
int main()
{
    int first[10], second[10], sum[20], i, length;

    cout << "Enter the number of elements = ";
    cin >> length;

    cout << "Enter elements = ";

    for (i = 0; i < length; i++)
        cin >> first[i];

    cout << "Enter elements = ";

    for (i = 0; i < length; i++)
        cin >> second[i];

    cout << "Sum = ";

    for (i = 0; i < length; i++)
    {
        sum[i] = first[i] + second[i];
        cout <<sum[i]<<", ";
    }
    return 0;
}
