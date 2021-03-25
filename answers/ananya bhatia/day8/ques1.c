#include <stdio.h>


int main()
{
    int n, e, sum = 0, x = 0;

    printf("size of the array: ");
    scanf("%d", &n);

    int nums[n];
  
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter element no %d in nums array: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("\nunique elements are: ");  

    for (int i = 0; i < n; i++)
    {
        x = 0;

        for (int j = 0; j < n + 1; j++)
        {
            if (i != j )
            {
                if (nums[i] == nums[j])
                {
                    x++;
                }
            }
        }

        if (x == 0)
        {
            printf("%d", nums[i]);
            e = nums[i];
            sum += e;
        }
    }

  
    printf(", and the sum is %d \n", sum);
     
    return 0;
    
}
