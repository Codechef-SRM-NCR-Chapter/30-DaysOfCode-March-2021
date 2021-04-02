#include<stdio.h>
int totalpaths(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
    else{
        return totalpaths(m,n-1)+totalpaths(m-1,n);
    }
}
int main(){
    int m,n;
    printf("enter the value of rows: ");
    scanf("%d",&m);
     printf("enter the value of columns: ");
    scanf("%d",&n);
    printf("%d",totalpaths(m,n));
    return 0;
}
