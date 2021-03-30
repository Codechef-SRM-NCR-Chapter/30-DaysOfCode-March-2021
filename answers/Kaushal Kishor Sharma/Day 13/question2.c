#include <stdio.h>
#include <stdbool.h>

bool palCheck();

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int array[size];

    for (int i = 0; i <size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    if (palCheck(array, 0, size - 1) == true)
        printf("\nPALINDROME\n");
    else 
        printf("\nNOT PALINDROME\n");
}

bool palCheck(int array[], int alpha, int omega)
{
    if (omega <= alpha)
        return true;
    
    if(array[alpha] == array[omega])
        return palCheck(array, alpha + 1, omega - 1);
    
    else
        return false;
}
