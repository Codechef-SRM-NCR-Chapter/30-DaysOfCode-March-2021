#include <stdio.h>
int palindrome(int arr[], int first, int last);
int main()
{
    int n, i;
    printf("Enter the no of elements in array:- ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element no %d of array",i+1);
        scanf("%d", &a[i]);
    }
    
    if (palindrome(a, 0, n - 1) == 1)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
  
    return 0;
}

int palindrome(int arr[], int first, int last)
{
    if (first >= last) {
        return 1;
    }
    if (arr[first] == arr[last]) {
        return palindrome(arr, first + 1, last - 1);
    }
    else {
        return 0;
    }
}
