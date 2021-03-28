#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool oddCheck();

int main()
{
    char string [500];
    
    printf("Enter the string: ");
    fgets(string, 500, stdin);

    if (oddCheck(string) == true)
        printf("YES\n");
    else 
        printf("NO\n");

}

bool oddCheck (char *string)
{
    int count[500] = {0};
    int odd = 0;

    for (int i = 0; string[i]; i++)
    {
        count[string[i]]++;
    }

    for (int i = 0; i < 500; i++)
    {
        if(count[i] & 1)
            odd++;

        if (odd > 1)
           return false;
    }

    return true;
}
