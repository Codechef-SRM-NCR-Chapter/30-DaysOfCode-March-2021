#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    int rs=0;
    int r = -1;
    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == rs)
            {
                r++;
            }
        }
    }
    cout << "\n" << r << endl;
    return 0;
}
