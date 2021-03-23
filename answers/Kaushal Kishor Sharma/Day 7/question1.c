#include <stdio.h>
#include <stdio.h>

int arraySize;
int target[] = {};

void insert_element();

int main()
{
    printf("Enter the array size: ");
    scanf("%d", &arraySize);

    int nums[arraySize], index[arraySize];
    int target[arraySize];


    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter element no %d in nums array: ", i+1);
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < arraySize; j++)
    {
        printf("Enter element no %d in index array: ", j+1);
        scanf("%d", &index[j]);
    }

    printf("\n [");

    for (int k = 0; k < arraySize; k++)
    {
       insert_element(index[k], nums[k], target);
    }

    for (int l = 0; l < arraySize; l++)
    {
        printf("%d ", target[l]);
    }

    printf("]\n");

    return 0;

}

void insert_element(int position,int element, int * a)
{
	for(int i = arraySize; i > position ; i--)
    {
		a[i] = a[i-1];		
	}
	a[position] = element;
}
