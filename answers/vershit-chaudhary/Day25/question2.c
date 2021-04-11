#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates of the point where you want to go: \n");
    printf("absicca: ");
    scanf("%d",&x);
     printf("ordinate: ");
    scanf("%d",&y);
    if(y>x){
        printf("this point can't be reached by given moves\nSORRY :)\n");
    }
    else{
        printf("minimum moves required to reach this point: %d",x);
    }
    return 0;
}
