#include<stdio.h>
unsigned int setbits(unsigned int n){
    unsigned int count=0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main(){
   int n,temp,x;
   printf("enter the length of array: ");
   scanf("%d",&n);
   int array[n];
   int set[n];
   for(int i=0;i<n;i++){
       printf("enter the element at position %d: ",i+1);
       scanf("%d",&array[i]);
   }
   for(int i=0;i<n;i++){
       set[i]=setbits(array[i]);
   }
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(set[i]<set[j]){
               temp=set[i];x=array[i];
               set[i]=set[j];array[i]=array[j];
               set[j]=temp;array[j]=x;
           }
       }
   }
   for(int i=0;i<n;i++){
       printf("%d ",array[i]);
   }

    return 0;
}
