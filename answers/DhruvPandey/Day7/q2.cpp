#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array \t";
    cin >> n;
    int arr[n];
    cout << "Enter values \t";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "\n";
    int a, b, c;
    cout << "Enter value of a , b , c" << endl;
    cin >> a;
    cin>> b;
    cin>> c;
    int flag = 0;
    for (int i = 0; i < n - 2; i++)
    {
    for (int j = i + 1; j < n - 1; j++)
    {
    for (int k = j + 1; k < n; k++)
    {                
    if ((abs(arr[i] - arr[j]) <= a) && (abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[k]) <= c))
    {
    flag++;
    }
    }
    }
    }
cout << flag;
}
