#include <stdio.h>

/* 
It is mathematically trivial that we get the maximun sum when the elements are 
in ascending order.

If we sort the array and just add from the first term to the last by skipping
one term each time, we won't even need to use the minimum function to get the result.
*/

int main()
{
    int size, sum = 0, t;

    printf("How many elements are there?: ");
    scanf("%d", &size);

    int nums[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    //sorting 
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(nums[i] > nums [j])
            {
                t = nums[i];
                nums[i] = nums[j];
                nums [j] = t;
            }
        }
    }

    for ( int i = 1; i < size; i+= 2)
    {
        sum += nums[i];
    }

    printf("\nThe Maximum possible sum is %d\n", sum);
}

