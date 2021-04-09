#include<stdio.h>
int main(){
    int n,x=0,y=0;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements one by one: ");
    for(int i=0;i<n;i++){
        printf("enter the element at position %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        x=0;
        x=x+arr[i];
        for(int j=i+1;j<n;j++){
            x=x+arr[j];
            if(x!=0){
                continue;
            }
           else if(x==0){
               y=y+1;
            }
        }
    }
    printf("output = %d",y);
    return 0;
}
