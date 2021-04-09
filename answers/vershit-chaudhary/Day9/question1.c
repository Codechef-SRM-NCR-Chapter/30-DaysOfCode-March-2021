#include<stdio.h>
int main(){
    int target,n,i,x=0;
    printf("enter the value of target : ");
    scanf("%d",&target);
    printf("\nenter the size of array : ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        printf("\nenter the element at %d position : ",i);
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        while(num[i]>=target){
            continue;
        }
        for(int j=0;j<n;j++){
            if(i!=j && num[i]>num[j] && i>j && num[i]!=num[j] && num[j]==target-num[i] && num[j]!=x){
                printf("[ %d, %d ], ",i,j);
                x=x+num[j];
            }
        }
    }
    return 0;
}
