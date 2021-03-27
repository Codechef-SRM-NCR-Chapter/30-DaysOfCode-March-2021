#include<stdio.h>
#include<string.h>

#define NO_OF_CHARS 256

int canFormPalindrome(char *str)
{
    int count[NO_OF_CHARS] = { 0 };

    for (int i = 0; str[i]; i++)
        count[str[i]]++;

    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return 0;
    }

    return 1;
}
int main()
{
    int y;
    char str[100];
    printf("Enter the string: ");
    gets(str);
    y=canFormPalindrome(str);
    if(y==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
