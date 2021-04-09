#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char string[200];
    bool check;

    printf("Enter the sentence: ");
    fgets(string, 200, stdin);

    int present[26] = {0};

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            char c = tolower(string[i]);
            int index = c - 'a';
            present[index] = present[index] + 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(present[i] == 0)
            check = false;
        else 
            check = true;
    }

    if (check == true)
        printf("PANGRAM EXISTS\n");
    else
        printf("\n PANGRAM DOES NOT EXIST \n");

    return 0;
}
