#include<iostream>
using namespace std;
int findTransitionPoint(int arr[], int n)
{
    for(int i=0; i<n ;i++)
      if(arr[i]==1)
        return i;
    return -1;
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int point = findTransitionPoint(arr, n);
    point >= 0 ? cout << "Transition point is "
                      << point
        : cout<<"There is no transition point";
    return 0;
}
