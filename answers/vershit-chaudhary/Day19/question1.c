#include<stdio.h>
int main(){
    int n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of array one by one: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("repeated number is: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                printf("%d ",array[i]);
            }
        }
        if((i+1)!=array[i]){
            printf("\nmissing number is %d",i+1);
        }
    }
    return 0;
}
