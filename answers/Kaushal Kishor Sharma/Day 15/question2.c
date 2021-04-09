#include <stdio.h>

int paths();
int factorial();

int main()
{
    int m, n;

    printf("Enter m:  ");
    scanf("%d",&m);
    printf("Enter n:  ");
    scanf("%d",&n);

    printf("\n %d \n",paths(m, n));
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    if (n < 0)
        printf("Error! Enter a positive number.");
    else 
    {
        for (int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
    }
    return fact;
}

int paths(int m, int n)
{
    int answer, numerator, denominator;

    numerator = factorial(n + m - 2);
    denominator = factorial(m-1) * factorial(n-1);
    answer = numerator / denominator;

    return answer;
}
