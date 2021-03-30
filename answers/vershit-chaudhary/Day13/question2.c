#include<stdio.h>
int palindrome(int arr[], int a,int b){
    if(a>=b){
        return 1;
    }
    if(arr[a]==arr[b]){
        return palindrome(arr,a+1,b-1);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("\nenter the %d element of array: ",i+1);
    scanf("%d",&arr[i]);
    }
    if(palindrome(arr,0,n-1)==1){
        printf("YES THIS ARRAY IS PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
    return 0;
}
