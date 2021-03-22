#include <stdio.h>

int main()
{
    int extraCandies, max = 0, kids;
    int candies[kids];

    printf("Enter the number of children: ");
    scanf("%d", &kids);
    
    for (int i = 0; i < kids; i++)
    {
        printf("\n Enter the number of candies for child %d: ", i+1);
        scanf("%d", &candies[i]);
    }

    printf("\n How many extra candies are there?: \n");
    scanf("%d", &extraCandies);

    for (int i = 0; i < kids; i++)
    {
        if ( candies[i] > max)
            max = candies[i];
    }

    for (int i = 0; i < kids; i++)
    {
        if (candies[i] + extraCandies < max)
            printf("False \n");
        else
            printf("True \n");
    }
  return 0;
}
