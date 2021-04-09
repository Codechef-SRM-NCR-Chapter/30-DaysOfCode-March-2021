#include <stdio.h>

int main()
{
    int size, target;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int nums[size];

    printf("\n Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < size; j++)
    {
        for (int k = 1; k <= size; k++)
        {
            if (nums[j] + nums[k] == target)
            {
                printf("[%d, %d]\n", nums[j], nums[k]);
            }
        }
    }

    return 0;
}
