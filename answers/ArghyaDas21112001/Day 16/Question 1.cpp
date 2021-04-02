#include <iostream>

using namespace std;

int numberofOne(bool a[], int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        
        if ((mid == high || a[mid+1] == 0) && (a[mid] == 1))
        {
            return mid+1;
        }
        if (a[mid] == 1)
        {
            return numberofOne(a, (mid + 1), high);
        }
        
        return numberofOne(a, low, (mid -1));
    }
    
    return 0;
}

int main()
{
   int n;
   cout<<"Enter the size of the array: ";
   cin>>n;
   bool a[n];
   cout<<"Enter the elements of the array: ";
   for(int i=0;i<n ;i++)
   {
       cin>>a[i];
   }
   cout << "Count of 1's in given array is " << numberofOne(a, 0, n-1);
   return 0;
}
