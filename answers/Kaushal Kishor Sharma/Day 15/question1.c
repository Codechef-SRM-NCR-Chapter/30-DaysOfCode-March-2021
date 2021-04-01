#include <stdio.h>
#include <string.h>
#define MAX_LEN 100


void reverse(char* string, int count);

int main()
{
   char string[MAX_LEN];

    printf("Enter the string: ");
    gets(string);

    reverse(string, -1);
    printf("%s\n", string);
}


void reverse(char* string, int count) 
{
   if (count == 0) 
       return;


   int a = 0, b = 0, length = 0;

   for (int i = 0; i < strlen(string); i++) 
   {
       if(string[i] == ' ' && a == 0) 
       {
           a = i;
           length++;
           if (length == count)
              break;
            
       } 
       else if(string[i] == ' ') 
       {
           b = a+1;
           a = i;
           length++;
           if (length == count) 
               break;
       }
   }


   if(a == 0 && b == 0) 
       return;
   
   int check = 0;

    for(int i = a; i >= 0; i--)
     {
       char temp = string[i];
       for(int k = i; k < strlen(string) - 1; k++)
        {
           if(check > 2 && k == (strlen(string) - check)) 
               k = strlen(string);
           else 
               string[k] = string[k+1];
        }
        
        if(i == b) 
        i = 0;
    
        if (check == 0) 
        {
            string[(strlen(string) - 1) - check] = temp;
            check++;
        }   
        else 
        {
             string[(strlen(string) - check)] = temp;
             check++;
        }
    }

    count = length;
    reverse(string, count - 1);
}
