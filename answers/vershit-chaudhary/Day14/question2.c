#include<stdio.h>
int sum(int a1[],int a2[],int n,int a,int arr[]){
    if(a<n){
    arr[a]=a1[a]+a2[a];
    printf("%d ",arr[a]);}
    sum(a1,a2,n,a+1,arr);
    return 0;
}
int main(){
    int n,i;
    printf("enter the length of arrays: ");
    scanf("%d",&n);
    int a1[n];
    int a2[n];
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter element %d of array 1: ",i+1);
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        printf("enter element %d of array 2: ",i+1);
        scanf("%d",&a2[i]);
    }
    sum(a1,a2,n,0,arr);
    return 0;
    }
