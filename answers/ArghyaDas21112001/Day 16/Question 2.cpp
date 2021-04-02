#include <iostream>

using namespace std;

int findTransitionPoint(int a[], int n)
{ 
    int lb = 0, ub = n-1;
    while (lb <= ub)
    {
        int mid = (lb+ub)/2;
        
        if (a[mid] == 0)
            lb = mid+1;
            
        else if (a[mid] == 1)
        {
            if (mid == 0 || (mid > 0 && a[mid - 1] == 0))
                return mid;
            
            ub = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n ;i++)
    {
        cin>>a[i];
    }
 
    int point = findTransitionPoint(a, n);
 
    point >= 0 ? cout<<"Transition point is " << point+1
               : cout<<"There is no transition point";
    return 0;
}
