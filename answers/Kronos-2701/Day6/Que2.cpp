#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;

    cout<<"Enter the size of array: ";

    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array: ";

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }

    int sum = 0;

    for (int i = 0; i < n; i++) 

    {

        for (int j = i; j < n; j += 2)

        {

            for (int k = i; k <= j; k++) 

            {

                sum += arr[k];

            }

        }

    }

    cout<<"Sum of all odd possible sub arrays is : "<<sum;

    return 0;

}