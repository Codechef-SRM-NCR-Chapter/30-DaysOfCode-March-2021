#include <stdio.h>

int sum();

int main()
{
    int num;

    printf("\nEnter the number: ");
    scanf("%d", &num);
    printf("\nSum = %d\n", sum(num));
    
}

int sum(int num)
{
    if(num == 0)
        return 0;

    return ((num % 10) + sum(num / 10));
}
