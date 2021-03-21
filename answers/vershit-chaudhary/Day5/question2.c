#include<stdio.h>
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
            break;
        }
    }
    for(int i=2;i<n;i++){
        if(n%i!=0){
            return 0;
         }
    }
}
int main(){
    int n=2,x,row,y;
    printf("enter the number of rows:\n");
    scanf("%d",&row);
    printf(" *\n");
    for(y=2;y<=row;y++){
        for(int j=1;j<=y;j++){
             x=prime(n);
            if(x==1){
                printf(" * ");
            }
            else{
                printf(" # ");
            }
            n=n+1;
        }
        printf("\n");
    }
    return 0;
}
