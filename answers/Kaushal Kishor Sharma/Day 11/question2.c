#include <stdio.h>
#include <string.h>

int patternCount();

int main()
{
    int num = 0, count = 0, size = 256;
    char string [size];
    char tofind [size];
    
    printf("Enter the string: ");
    gets(string);
    
    printf("\n Enter the number of patterns: ");
    scanf ("%d", &num);

    
   for (int i = 0; i <= num; i++)
   {
        printf("Enter pattern %d: ", i);
        gets(tofind);
        count =  patternCount(string, tofind);
        printf("\n %d \n", count);
   }
   
}

int patternCount (char * string, char * tofind)
{
    int count = 0, present;

    for (int i = 0; i <= strlen(string) - strlen(tofind); i++)
    {
        present = 1;
        for (int j = 0; j < strlen(tofind); j++)
        {
            if (string[i + j] != tofind[j])
            {
                present = 0;
                break;
            }
        }
        if (present == 1)
            count++;
    }
    return count;
}
