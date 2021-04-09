#include <iostream>

using namespace std;

void findFourElements(int arr[], int n, int X)
{
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == X)
                    {
                        cout << arr[i] <<", " << arr[j]<< ", " << arr[k] << ", " << arr[l];
                    }
                }
           }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int sum;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;
    cout<<"The numbers that add are up to "<<sum<<" is :";
    findFourElements (arr, size, sum);
    return 0;
}
