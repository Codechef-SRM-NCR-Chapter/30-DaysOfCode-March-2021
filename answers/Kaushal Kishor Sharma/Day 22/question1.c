#include <stdio.h>
#include <string.h>

#define MAX 100

void delchar();

int main()
{
    char string[MAX];
    
    printf("Enter the string: ");
    fgets(string, MAX, stdin);

    int len = strlen(string);

   while(len != 2)
   {
       for (int i = 0; i <= len; i++)
        {
            if (string[i] == string[i + 1])
                 delchar(string, 2, i+1);
        }
   }

}

void delchar(char *x,int a, int b)
{
	if ((a+b-1) <= strlen(x))
	{
		strcpy(&x[b-1],&x[a+b-1]);
		puts(x);
	}
}
