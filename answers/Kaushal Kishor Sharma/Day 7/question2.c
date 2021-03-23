#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int a, b, c, arrLength, triplets = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &arrLength);
    printf("\n");

    int arr[arrLength];

    for (int x = 0; x < arrLength; x++)
    {
        printf("Enter element no %d in the array: ", x+1);
        scanf("%d", &arr[x]);
    }

    printf("\n Enter value of a: ");
    scanf("%d", &a);
    printf("\n Enter value of b: ");
    scanf("%d", &b);
    printf("\n Enter value of c: ");
    scanf("%d", &c);

    for (int i = 0; i < arrLength; i++)
    {
        for (int j = 0; j <  i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if ( abs(arr[i] - arr [j] <= a ) && abs(arr [j] - arr[k] <= b) && abs(arr[i] - arr[k] <= c))
                {
                    triplets++;
                    printf("[%d, %d, %d] \n", arr[k], arr[j], arr[i]);
                }
            }
        }
    }
    printf("\n Total number of good triplets are: %d \n", triplets);
}

   
