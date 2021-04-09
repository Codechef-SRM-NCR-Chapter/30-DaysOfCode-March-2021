#include <iostream>
using namespace std;
int check_palindrome(int arr[], int start, int end)
{
    if (start>=end)
	 {
	   return 1;
     }
    if(arr[start]==arr[end]) 
	{
        start++;end--;
		return check_palindrome(arr,start,end);
    }
    else 
	{
        return 0;
    }
}
int main()
{
    int a[100];int n;
    cout<<"Enter size of array\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter elements\n";
		cin>>a[i];
		cout<<endl;
	}
    if (check_palindrome(a,0,n-1)==1)
        cout <<"Array is a Palindrome\n";
    else
        cout <<"Array is not a Palindrome";
    return 0;
}
