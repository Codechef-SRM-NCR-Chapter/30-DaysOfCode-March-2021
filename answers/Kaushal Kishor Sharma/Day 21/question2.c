#include <stdio.h>

#define MAX_LEN 200

void bubbleSort();
void swap();


int main ()
{
    int size;
    printf("Enter length of array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    int num1 = 0, num2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (i & 1)
            num1 = num1*10 + arr[i];
        else
            num2 = num2*10 + arr[i];
    }
    
    printf("Sum: %d\n", num1 + num2);
}


void bubbleSort(int arr[], int n) 
{ 
    for (int i = 0; i < n-1; i++)     
        for (int j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) 
                swap(&arr[j], &arr[j+1]); 
} 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

