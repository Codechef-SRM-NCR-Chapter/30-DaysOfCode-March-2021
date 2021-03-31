#include <stdio.h>
#include <string.h>
#define MAX 100

void removeChar();

int main()
{
	  char string[MAX];
    printf("Enter the string: ");
    fgets(string, MAX, stdin);

    removeChar(string);
    printf("%s", string);
}

void removeChar(char* string)
{
    if (strlen(string) == 0)
        return;

    if (string[0] == string[1])
    {
        int i = 0; 
        while (string[i] != '\0') 
        {
            string[i] = string[i + 1];
            i++;
        }
        removeChar(string);
    } 
    removeChar(string + 1);
}
