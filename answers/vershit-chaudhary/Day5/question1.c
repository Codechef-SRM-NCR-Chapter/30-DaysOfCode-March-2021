#include<stdio.h>
int main(){
    int i,j=0,k=1,next;
    for(i=1;i<=50;i++){
        printf("%d, ", j);
        next =j+k;
        j=k;
        k=next;
        }
   
    return 0;
}
