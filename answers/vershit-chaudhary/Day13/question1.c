#include<stdio.h>
int sum(int n){
   if(n==0){
       return 0;
   }
   return n%10+sum(n/10);
}
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    int result=sum(number);
    printf("%d is the sum of the digits of the number %d",result,number);
   return 0;
}
