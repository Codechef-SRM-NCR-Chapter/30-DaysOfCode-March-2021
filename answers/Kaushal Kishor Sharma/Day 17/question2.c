#include <stdio.h>

void subarrays ();

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    subarrays(array, size);
}

void subarrays(int array[], int size)
{
    int number = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += array[j];

            if (sum == 0) 
                number++;
        }
    }
    printf("Total subarrays are: %d\n", number);
}
