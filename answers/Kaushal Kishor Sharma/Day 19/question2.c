#include <stdio.h>

void counter();

int main()
{
    int size, sum;

    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter sum: ");
    scanf("%d", &sum);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    counter(size, sum, array);

}

void counter (int size, int sum, int array[])
{
    int triplet = 0;
    for (int i = 0; i < size - 2; i++)
        for (int j = i+1; j < size; j++)
            for(int k = j+1; k < size; k++)
                if (array[i] + array[j] + array[k] < sum)
                    triplet++;
                    
    printf("Total triplets = %d\n", triplet);
}
