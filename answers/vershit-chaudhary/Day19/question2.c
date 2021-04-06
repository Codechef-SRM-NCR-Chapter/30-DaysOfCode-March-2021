#include<stdio.h>
int main(){
    int n,s,x=0;
    printf("enter the length of array: ");
    scanf("%d",&n);
    printf("enter the sum number: ");
    scanf("%d",&s);
    int arr[n];
    printf("enter the elements one by one: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                if((arr[i]+arr[j]+arr[k])<s){
                    x=x+1;
                }
            }
        }
    }
    printf("total number of triplets whose sum is less than %d is/are %d",s,x);
    return 0;
}
