#include <stdio.h>

int bitCounter();
int insSort();
int bitSort();
int size;

int main()
{
    
    printf("Enter size of the array: ");
    scanf("%d",&size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }

    bitSort(array, size);

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
}

int bitCounter(int cidx)
{
    int cnt = 0;
    while (cidx)
    {
        if( cidx & 1)
            cnt += 1;
        cidx = cidx >> 1;
    }
    return cnt;
}

int insSort(int array[], int sorted[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int a = sorted[i], b = array[i], j = i - 1;

        while(j >= 0 && sorted[j] < a)
        {
            sorted[j+1] = sorted [j];
            array[j+1] = array[j];
            j -= 1;
        }
        sorted[j+1] = a;
        array[j+1] = b;
    }
}

int bitSort (int array[], int size)
{
    int sorted[size];
    for (int i = 0; i < size; i++)
        sorted[i] = bitCounter(array[i]);
    
    insSort(array, sorted, size);
}
