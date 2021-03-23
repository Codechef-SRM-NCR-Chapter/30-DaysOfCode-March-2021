#include<stdio.h>
void primefactors(int n){
    int i;
    while(n%2==0){
        printf("%d, ",2);
        n=n/2;
    }
    for(i=2;i<=n;i++){
        while(n%i==0){
            printf("%d, ",i);
            n=n/i;
        }
    }
}
int main(){
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   printf("prime factors of %d are: ",n);
   primefactors(n);
    return 0;
}
