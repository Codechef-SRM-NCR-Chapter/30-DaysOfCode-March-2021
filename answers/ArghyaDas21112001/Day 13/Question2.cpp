#include <iostream>
using namespace std;
void palindromesearch(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Not Palindrome";
    else
        cout << "Palindrome";
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    palindromesearch(arr, n);
    return 0;
}
