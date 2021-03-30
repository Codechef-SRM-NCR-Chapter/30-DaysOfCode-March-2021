#include <stdio.h>
int sumOfDigits(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
    return ((num % 10) + sumOfDigits(num / 10));
    }
}

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d", num, sumOfDigits(num));
    return 0;
}
