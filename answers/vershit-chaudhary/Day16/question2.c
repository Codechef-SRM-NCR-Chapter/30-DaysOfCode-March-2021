#include<stdio.h>
int main(){
    int length;
    printf("enter the length of array: ");
    scanf("%d",&length);
    int array[length];
    for(int i=0;i<length;i++){
        printf("enter the element at position %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("entered array is: { ");
     for(int i=0;i<length;i++){
        printf("%d, ",array[i]);
    }
    printf("}\ntransition points: ");
    for(int i=0;i<length;i++){
        if(array[i]==0 && array[i+1]==1){
            printf("%d ",i+1);
        }
        else{
            continue;
        }
    }
}
