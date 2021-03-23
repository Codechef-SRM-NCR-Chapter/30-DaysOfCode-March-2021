#include <stdio.h>


int main() 
{

   int rows, digit = 1;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (int i = 1; i <= rows; i++) 
   {
      for (int j = 1; j <= i; ++j) 
      {
         printf("%d ", digit);
         digit = digit+1;
      }
      printf("\n");
   }
   return 0;
}
