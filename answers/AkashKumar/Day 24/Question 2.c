#include <stdio.h>
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element number %d  ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Minimum no of steps needed to reduce all element to 0 will be the maximum element,  \n  So, Minimum no of steps is", largest(arr, n));
    return 0;
}
