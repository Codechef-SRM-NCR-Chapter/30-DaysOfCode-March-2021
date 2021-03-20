#include <stdio.h>

int main(void) 
{

    int number, i, factor;
    i = 2;

    printf("Enter a number you want to find prime factors of:\n");
    scanf(" %i", &number); 
    printf("The required factors are: ");

    while(number != 1) 
    { 
        if(number % i != 0)
            i++; 
        else if(number % i == 0)
        {
           factor = i; 
           printf("%i, ", factor); 
           number = number / i; 
        }
    }

    return 0;
    
}
