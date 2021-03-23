  
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter length of the desired array" << endl;
    cin >> length;
    int arr[length];
    for (int a = 0; a < length; a++)
    {
        cout << "Enter value " << a + 1 << endl;
        cin >> arr[a];
    }
    int sum = 0;
    for (int a = 0; a < size; x++)
    {
        for (int b = a; b < size; b = b + 2)
        {
            for (int c =a; c <= b; c++)
            {
                sum = sum + arr[c];
            }
        }
    }
    cout <<"Sum of the all the subarrays"<< sum;
    return 0;
}
