#include <stdio.h>

int  main()
{
    int size, k;

    printf("Enter length of array: ");
    scanf("%d", &size);

    printf("Enter K: ");
    scanf("%d", &k);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = k -1; i >= 0; i--)
        printf("%d ", arr[i]);

    for (int i = k; i < size; i++)
        printf("%d ", arr[i]);

}
