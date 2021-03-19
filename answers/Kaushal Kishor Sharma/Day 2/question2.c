#include <stdio.h>
#include <stdbool.h>

//functions used [declaration]
bool primeCheck();
bool emirpCheck();

int main()
{
    int num = 0;
    printf("Enter the number you want to check: \n");
    scanf("%d", &num);

    if (emirpCheck(num) == true)
        printf("The entered number is and Emirp number\n");
    else 
        printf("The entered number is not an Emirp number\n");
}

//functions used [definition]

bool primeCheck (int num)
{
    if (num <= 1)
        return false;
    
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;

    return true;
}

bool emirpCheck (int num)
{
    if (primeCheck(num) == false)
        return false;

    int reverseNum = 0;
    while (num != 0)
    {
        int temp = num % 10;
        reverseNum = reverseNum * 10 + temp;
        num /= 10;
    }

    return primeCheck(reverseNum);
}
