#include <stdio.h>

int main()
{
    int size, sum = 0, i;

    int input[50];
    printf("How many elements do you want in your array? \n");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &input[i]);
    }

    for(int j = 1; j <= size; j+=2)
    {
		for( i = 0; i < size -j+1; i++)  
            {
			  for(int index=i;index<i+j;index++) 
                {
                    sum+=input[index];  
                }
            }
    }
  
    printf("Sum: %d \n", sum);
    return 0;
}
