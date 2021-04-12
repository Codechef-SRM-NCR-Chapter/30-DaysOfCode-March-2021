#include<stdio.h>
int count(int arr[], int n){
    int moves=0;
    while(1){
        int zeroes=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                --arr[i];
                ++moves;
            }
            if(arr[i]==0){
                zeroes++;
            }
        }
        if(zeroes==n){
            break;
        }
        for(int j=0;j<n;j++){
            arr[j]=arr[j]/2;
        }
        moves++;
    }
    return moves;
}
int main(){
    int n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements one by one: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("the minimum moves required is %d ",count(array,n));
    return 0;
}
