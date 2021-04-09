#include <iostream>

using namespace std;
  
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[size];
    }
    int reqsum=0;
    
    int res = -1;
    for (int i = 0; i < size; i++) 
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum == reqsum)
            {
                res++;
            }
        }
    }
    cout << "Number of such sub arrays: "<<res  << endl;
    return 0;
}
