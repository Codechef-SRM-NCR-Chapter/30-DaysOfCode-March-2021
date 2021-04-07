#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
int top,stack[MAX_LEN];


void push(char x)
{
      if(top == MAX_LEN - 1)
        printf("stack overflow");
      else 
        stack[++top] = x;
}

void pop()
{       
    printf("%c",stack[top--]);
}


int main()
{
   char string[MAX_LEN];

   printf("Enter the string: ");
   fgets(string, MAX_LEN, stdin);

   int len = strlen(string), i;

   for(i = 0; i < len; i++)
        push(string[i]);

   for(i = 0; i < len; i++)    
      pop();        
}
