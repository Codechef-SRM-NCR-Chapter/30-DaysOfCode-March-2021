#include <stdio.h>
#include <string.h>
int main() {
   char s[50];
   int i;
   int count=0;
   printf("\nEnter a string : ");
   gets(s);
   for(i = 0; s[i]!='\0'; i++)
   {
       if(s[i]>64&& s[i]<91)
       {
          printf("\n %c",s[i]);
          count=count+1;
       }
       else
       printf("%c",s[i]);
   }
   printf("\n %d",count);
}
