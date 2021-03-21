#include <stdio.h>
#include <stdbool.h>

bool prime ();

int main()
{
    int rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i+1 ; j++)
        { 
            if(prime(num) == true)
                printf("# ");
            else
                printf("* ");

            num += 1;
        }
        
        printf("\n");
    }
    
}

bool prime(int num)
{
    if (num <= 1)
        return false;
    
    for(int i=2; i<num; i++)
    {
        if (num %i == 0)
            return false;

    }
    return true;
}
