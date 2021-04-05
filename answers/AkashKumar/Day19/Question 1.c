#include <stdio.h>
#include <stdlib.h>

void printTwoElements(int arr[], int size)
{
int i;
printf("\n The repeating element is");
for (i = 0; i < size; i++) {
if (arr[abs(arr[i]) - 1] > 0)
{
arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
}
else
{
printf(" %d ", abs(arr[i]));
}
}
printf("\nand the missing element is ");
for (i = 0; i < size; i++) {
if (arr[i] > 0)
{
printf("%d", i + 1);
}
}
}

int main()
{
int n;
    printf("Enter N  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
    printf("Enter element no %d   ",i+1);
    scanf("%d",&arr[i]);
    }
printTwoElements(arr, n);
return 0;
}
