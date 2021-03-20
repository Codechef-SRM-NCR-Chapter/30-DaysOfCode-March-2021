#include <stdio.h>
#include <math.h>

//functions used [declaration]
int findLength();

int main()
{
    int number, sum = 0, remainder = 0, n;

    printf("Enter the number you want to check: \n");
    scanf("%d", &number);

    int len = findLength(number);
    n = number;

    while (number > 0)
    {
        remainder = number % 10;
        sum = sum +  (int)pow(remainder, len);
        number = number / 10;
        len--;

    }

    if (sum == n)
        printf("\n %d is a disarium number",n );
    else 
        printf("\n %d is not a disarium number", n);

    return 0;

}

int findLength(int n)
{
    int length = 0;

        while (n != 0 )
        {
            length += 1;
            n = n/10;
        }

    return length;

}
