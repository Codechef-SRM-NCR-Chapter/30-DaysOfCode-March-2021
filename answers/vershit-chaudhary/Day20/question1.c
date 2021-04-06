#include<stdio.h>
int removefrom(int n){
    int temp,x=0,y=0;
    temp=n;
    while(temp!=0){
    x=x+temp%10;
    temp=temp/10;
    if(x!=temp%10){
       y=y*10+x;
    }
    x=x-x;
    }
    int rem,m=0;
    while(y!=0){
        rem=y%10;
        m=m*10+rem;
        y=y/10;
    }
    printf("%d",m);
    return 0;
}
int main(){
    int n;
    printf("enter the number of testcases: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter testcase no.%d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
       removefrom(a[i]);
       printf("\n");
    }
    return 0;
}
