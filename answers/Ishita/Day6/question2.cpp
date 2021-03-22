#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    for (int a=0;a<size;a++)
    {
        cout << "Enter the value of "<<a+1<< endl;
        cin >> arr[a];
    }
    int sum = 0;
    for (int a=0;a<size;a++)
    {
        for (int b=a;b<size;b=b+2)
        {
            for (int c=a;c<=b;c++)
            {
                sum = sum + arr[c];
            }
        }
    }
    cout <<"Sum of all possible odd-length subarrays of arr = "<< sum ;
    return 0;
}
