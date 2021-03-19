#include<stdio.h>

int main()
{

    int number,remainder,array[10]={0},temp;

    printf("Enter the number:\n");
    scanf("%d",&number);

    temp = number;

    while(number > 0)
        {
            remainder = number%10;
            if(array[remainder] == 1)
            break;

            array[remainder] = 1;
            number = number /10;
        }

    if(number > 0)
         printf("The Number is not unique\n");
    else
         printf("The number is unique\n");

}
