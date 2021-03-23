#include <stdio.h>

int main()
{
    int n, i, digit = 0, sum = 0;


    printf("Enter the number of digits:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        digit = (digit*10) + i;
        sum += digit;

    }
    
    printf("The sum is: %d\n", sum);

}
