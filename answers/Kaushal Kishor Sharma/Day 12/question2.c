#include <stdio.h>
#include <string.h>
# define MAX_LEN 500

int counter ();

int main()
{
    char string[MAX_LEN] = {};
    int tests;

    printf("Enter number of tests: ");
    scanf("%d", &tests);
    
    for (int i = 0; i <= tests; i++)
    {
        printf("Enter the string %d: ", i);
        fgets(string, 500, stdin);

        printf("%d \n", counter(string));
    }
    
}

int counter (char *string)
{
    int count = 0;

    for(int i = 0; i < MAX_LEN;  i++)
    {
        if (string[i] == '1')
            count++;
    }
    // using permutation and combination, we can find that
    //total possibilities are: count * (count + 1) / 2
    return count*(count + 1) /2 ;
}
