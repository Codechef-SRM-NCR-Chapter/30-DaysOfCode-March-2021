#include<stdio.h>
int main(){
    int l,n;
    printf("enter the length of array: ");
    scanf("%d",&l);
    printf("enter the number: ");
    scanf("%d",&n);
    int arr[l];
    int rev[l];
    printf("enter the array element one by one: ");
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<l;i++){
        if(i<n){
           rev[i]=arr[n-(1+i)];
            }
        else{ rev[i]=arr[i];}
    }
    for(int i=0;i<l;i++){
        printf("%d, ",rev[i]);
    }
    return 0;
}
