#include <stdio.h>

void quadSearch();

int main ()
{
    int size, sum;
    printf("Enter the size: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter K: ");
    scanf("%d", &sum);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    quadSearch(a, size, sum);
}

void quadSearch(int a[], int size, int sum)
{
   for (int i = 0; i < size-3; i++)
   {
        if (a[i] + a[i+1] + a[i+2] + a[i+3] == sum)
            printf("%d, %d, %d, %d", 
            a[i], a[i+1], a[i+2], a[i+3]); 
   }
}
