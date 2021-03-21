#include <stdio.h>


int main()
{
    long a = 0, b = 1, c;

    /*I used long beacuse it shows negaave values for higher values 
    when using int due to the limited capacity of int */

    printf("Fibonacci series till 50 terms: ");

    for (int i = 1; i <= 50; ++i) {
        printf("%ld, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
}
