#include<stdio.h>
int maximum(int a,int b){
    int maximum;
    if(a>b){
        maximum=a;
    }
    else{
        maximum=b;
    }
    return maximum;
}
int sum(int a[],int n){
    int m1=a[0];
    int m2=a[0];
    for(int i=0;i<n;i++){
        m1=maximum(a[i],m1+a[i]);
        m2=maximum(m2,m1);
    }
    return m2;
}
int main(){
    int n,i;
    printf("enter the number of total terms :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the element at %d level : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nthe maximum contiguous sum of the given array is %d ",sum(a,n));
    return 0;
}
