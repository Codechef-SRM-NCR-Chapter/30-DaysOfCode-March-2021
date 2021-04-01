# include <stdio.h>
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
int main()
{
   char str[100];
   printf("Enter the String: ");
   gets(str);
   reverse(str);
   return 0;
}
