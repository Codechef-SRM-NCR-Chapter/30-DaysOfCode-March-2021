#include <stdio.h>


int main()
{
    int size, element, sum = 0, repetition = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];
  
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter element no %d in nums array: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("\n The unique elements are: [");  

    for (int i = 0; i < size; i++)
    {
        repetition = 0;

        for (int j = 0; j < size + 1; j++)
        {
            if (i != j )
            {
                if (nums[i] == nums[j])
                {
                    repetition++;
                }
            }
        }

        if (repetition == 0)
        {
            printf("%d, ", nums[i]);
            element = nums[i];
            sum += element;
        }
    }

    printf("]");
    printf(", and the sum is %d \n", sum);
     
    return 0;
    
}

