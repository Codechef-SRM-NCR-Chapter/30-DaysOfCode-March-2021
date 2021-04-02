#include<iostream>
using namespace std;
int findTransitionPoint(int arr[], int n)
{
    int lb = 0, ub = n-1;
    while (lb <= ub)
    {
        int mid = (lb+ub)/2;
        if (arr[mid] == 0)
            lb = mid+1;
        else if (arr[mid] == 1)
        {
            if (mid == 0
                    || (mid > 0 &&
                       arr[mid - 1] == 0))
                return mid;
            ub = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int point = findTransitionPoint(arr, n);
    point >= 0 ? cout<<"Transition point is " << point
               : cout<<"There is no transition point";
    return 0;
}
