#include <stdio.h>

int main()
{
    int extra;
    int max = 0;
    int flag = 1;
    int children;
    int candies[children];

    printf("Enter the number of children: ");
    scanf("%d", &children);
    
    for (int i = 0; i < children; i++)
    {
        printf("\n number of candies for child %d: ", i+1);
        scanf("%d", &candies[i]);
    }

    printf("\n enter number of extra candies?: \n");
    scanf("%d", &extra);

    for (int i = 0; i < children; i++)
    {
        if ( candies[i] > max)
            max = candies[i];
    }

    for (int i = 0; i < children; i++)
    {
        if (candies[i] + extra < max)
            flag = 0;
        
         
            if (flag == 0)
    {
      printf ("true\n");

    }
  else
    {
      printf ("false\n");
    }
        
    }

  return 0;
}
