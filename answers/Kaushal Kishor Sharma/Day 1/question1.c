#include <stdio.h>

int main()
{
    int i, j, digit;
    printf("Enter the no. of terms: \n");
    scanf("%d", &j);

    for(i = 1; i <= j; i++)
    {
        digit = (i*i*i) + 2 * i;
        printf("%d, ", digit);
    }
    return 0;

}
