#include <stdio.h>

int n;
int target[] = {};

void makearray();

int main()
{
    printf("array size: ");
    scanf("%d", &n);

    int nums[n],
    index[n];
    int target[n];


    for (int i = 0; i < n; i++)
    {
        printf("element no %d in nums array: ", i+1);
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf(" element no %d in index array: ", j+1);
        scanf("%d", &index[j]);
    }

    printf("\n [");

    for (int k = 0; k < n; k++)
    {
       makearray(index[k], nums[k], target);
    }

    for (int l = 0; l < arraySize; l++)
    {
        printf("%d ", target[l]);
    }

    printf("]\n");

    return 0;

}

void makearray(int position,int element, int * a)
{
	for(int i = n; i > number ; i--)
    {
		a[i] = a[i-1];		
	}
	a[number] = element;
}
