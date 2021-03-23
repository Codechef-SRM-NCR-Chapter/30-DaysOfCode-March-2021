#include<stdio.h>
#include<math.h>
int length(int n){
    int l=0;
    while(n!=0){
        l=l+1;
        n=n/10;
    }
    return l;
}
int main(){
    int n,rem;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int temp=n;
    int place=length(n);
    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        sum=sum+pow(rem,place);
        place=place-1;
    }
    if(sum==n){
        printf("the number is disarium number\n");
    }
    else{
        printf("number is not disarium");
    }
}
