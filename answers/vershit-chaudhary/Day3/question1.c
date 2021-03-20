#include<stdio.h>
int main(){
    int n,i=0,a,sum=0,series=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(a=i;a<=i;a++){
            sum=sum*10+a;
        }
        series=series+sum;
    }
    printf("sum of the series till term %d is %d",n,series);
    return 0;
}
