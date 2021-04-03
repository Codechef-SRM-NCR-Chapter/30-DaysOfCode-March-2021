#include<stdio.h>
int main(){
    int length;
    int x=0;
    printf("enter the length of array: ");
    scanf("%d",&length);
    int array[length];
    for(int i=0;i<length;i++){
        printf("enter the element at position %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("array is: { ");
     for(int i=0;i<length;i++){
        printf("%d, ",array[i]);
        }
        printf("}");
    for(int i=0;i<length;i++){
        if(array[i]==1){
            x=x+1;
        }
        else{
            break;
        }
    }
    printf("\nnumber of 1's appear is %d",x);
    return 0;
}
