#include <stdio.h>

int main()
{
    int size;
    int sum = 0;
    int num;

    int array[75];
    printf("enter size of the array \n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int j = 1; j <= size; j+=2)
    {
		for( int i = 0; i < size -j+1; i++)  
            {
			  for( num=i;num<i+j;num++) 
                {
                    sum+=array[num];  
                }
            }
    }
  
    printf("result : %d \n", sum);
    return 0;
}
