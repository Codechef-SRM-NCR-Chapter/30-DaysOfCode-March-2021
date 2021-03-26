#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
int main() {
   char s[100];
   int i;
   int count[26]={0};
   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
 
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==32)
            continue; 
 
        if(s[i]>64)
            count[s[i]-65] +=1;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]==0)
          {
             printf("PANAGRAM DOESN'T EXITS");
             exit(0);
          }
    }
printf("PANAGRAM EXISTS");
   return 0;
}
