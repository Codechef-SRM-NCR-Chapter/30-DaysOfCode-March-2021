#include <stdio.h>
int main() 
{
  int num=0;
  char str[100];
   printf("\n Please enter a string : ");
   gets(str);
   for(int i = 0; str[i]!='\0'; i++)
   {
       if(str[i]>64 && str[i]<91)
       {
          printf("\n %c",str[i]);
          num=num+1;
       }
       else
       printf("%c",str[i]);
   }
   printf("\n number of words in camel case : %d",num);
}
