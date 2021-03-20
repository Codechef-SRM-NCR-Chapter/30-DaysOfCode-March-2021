#include<stdio.h>
int main(){
    int star;
    int space;
    int row=5;
    for(star=1; star<=row; star++){
        for(space=star; space<((2*row)-star); space++){
            printf(" ");
        }
        for(space=1; space<=star; space++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
