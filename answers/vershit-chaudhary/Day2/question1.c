#include<stdio.h>
#include<math.h>
int main(){
   int n,reverse=0,rem;
   printf("enter a number:\n");
   scanf("%d",&n);
   while(n!=0){
       rem=n%10;
       reverse=reverse*10+rem;
       n/=10;
   }
   if(( reverse%2==0 || reverse%3==0 || reverse%5==0 ||  reverse%7==0) && (n%2==0 || n%3==0 || n%5==0 || n%7==0)){
       printf("this number is not emirp");
   }
    else{printf("this number is emirp");}
 
return 0;
}
