#include <stdio.h>
#include <stdlib.h>

int missing();
int repeating();

int main()
{
    int size; 
    printf("Enter N: ");
    scanf("%d", &size);
    
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Repeating Number: %d \n", repeating(array, size));
    printf("Missing Number: %d \n", missing(array, size));

}

int repeating(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[abs(array[i]) - 1] > 0)
            array[abs(array[i]) -1] = -array[abs(array[i]) - 1];
        
        else
            return abs(array[i]);
    }
}

int missing(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
            return i+1;
    }
}
