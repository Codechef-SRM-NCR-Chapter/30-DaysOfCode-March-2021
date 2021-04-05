#include <stdio.h>

int squares();

int main ()
{
    int num;
    printf("Enter N: ");
    scanf("%d", &num);
    printf("Total perfect squares: %d\n", squares(num));
}

int squares(int num)
{
    int count = 0;
   
   for (int i = 0; i < num; i++)
   {
       for (int j = 1; j * j <= i; j++)
       {
            if (j * j == i)
                count++;
       }
   }
    return count;
}
