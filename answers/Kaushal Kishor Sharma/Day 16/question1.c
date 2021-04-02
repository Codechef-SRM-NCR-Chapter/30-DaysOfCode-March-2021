#include <stdio.h>

int counter();

int main()
{   
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Total number of 1's is: %d \n", counter(array, size));
    return 0;
}

int counter(int array[], int size)
{
    if (array[size - 1] == 0)
        return 0;

    if (array[0])
        return size;
    
    return counter(array, size/2) + counter(array + size/2, size - size /2);
}
