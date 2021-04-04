#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("enter the number: ");
    scanf("%d",&n);
    x=sqrt(n);
   int array[x];
   for(int i=0;i<x;i++){
       array[i]=pow((i+1),2);
   }
   for(int i=0;i<x-1;i++){
       printf("%d, ",i+1);
   }
    return 0;
}
