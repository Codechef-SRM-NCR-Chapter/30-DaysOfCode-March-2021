#include<stdio.h>
    int main(){
        int arr[5]={1,4,2,5,3};;
        int sum=0,i;
         printf("the sum all possible odd-length subarrays is: ");
        for(i=0;i<5;i++){
            sum=sum+arr[i];
            if(i<=5/2){
                sum=sum+arr[i]+arr[i+1]+arr[i+2];
            }
            if(i==0){
                sum=sum+arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+4];
            }
        }
        printf("%d",sum);
    return 0;
}
