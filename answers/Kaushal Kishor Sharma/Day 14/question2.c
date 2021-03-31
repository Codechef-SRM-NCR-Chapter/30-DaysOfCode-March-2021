#include <stdio.h>

int sum();

int main ()
{
    int size1, size2, counter = 0;

    printf("Enter the size of the first (larger) array: ");
    scanf("%d", &size1);
    int array1[size1];

    for(int i = 0; i < size1; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second (smaller) array: ");
    scanf("%d", &size2);
    int array2[size1];

    for(int i = 0; i < size1; i++)
    {
        if (i < size2)
        {
            printf("Enter element %d: ", i+1);
            scanf("%d", &array2[i]);
        }
        else
            array2[i] = 0;
        
    }

    int summed[size1];

    printf("Sums: ");
    sum(array1, array2, counter, size1, summed);
    
}

int sum (int array1[], int array2[], int counter, int size, int summed[])
{
    if (counter != size)
    {
        summed[counter] = array1[counter] + array2[counter];
        printf("%d, ", summed[counter]);
        sum(array1, array2, counter+1, size, summed);
    }
}
