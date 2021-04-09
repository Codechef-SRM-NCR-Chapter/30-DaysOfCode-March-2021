#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int count = 0;
    char string[500] = {};

    printf("Enter the string: ");
    fgets(string, 500, stdin);

    for (int i = 0; string[i] != 0; i++)
    {
        if (isupper(string[i]))
        {
            printf("\n");
            count++;
        }
            
        printf("%c", string[i]);
    }

    printf("%d \n", count);

}
