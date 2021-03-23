#include<stdio.h>
int main(){
   int n;
   int x=0;
   printf("specify the length of array; ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       printf("enter the element at %d position: ",i+1);
       scanf("%d", &arr[i]);
       }
    int a,b,c;
    printf("\nenter the value of a: ");
    scanf("%d",&a);
    printf("\nenter the value of b: ");
    scanf("%d",&b);
    printf("\nenter the value of c: ");
    scanf("%d",&c);
    printf("\n");
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                     x=x+1;
                     printf("[");
            printf(" %d %d %d",arr[i],arr[j],arr[k]);
            printf("],");
                 }
                else{
                    continue;
                }
            }
        }
    }
    printf("\n");
    printf("\nthere are %d good triplets",x);
   return 0;
}
