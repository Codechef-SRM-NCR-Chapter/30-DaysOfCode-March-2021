#include<stdio.h>
int main(){
    int n,k;
    printf("enter the length of array: ");
    scanf("%d",&n);
    printf("enter the value of 'k': ");
    scanf("%d",&k);
    int array[n];
    for(int i=0;i<n;i++){
        printf("enter the element at position %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-3;i++){
        if(array[i]+array[i+1]+array[i+2]+array[1+3]==k){
            printf("(%d,%d,%d,%d)",array[i],array[i+1],array[i+2],array[1+3]);
        }
    }
    return 0;
}
