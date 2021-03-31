#include<stdio.h>
#include<string.h>
void skiprepeated(char* str);
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    skiprepeated(string);
    printf("%s",string);
    return 0;
}
void skiprepeated(char* str)
{
    if (str[0] == '\0')
        return;
    if (str[0] == str[1])
    {
        int i = 0; 
        while (str[i] != '\0') 
        {
            str[i] = str[i + 1];
            i++;
        }
        skiprepeated(str);
    } 
    skiprepeated(str + 1);
}
