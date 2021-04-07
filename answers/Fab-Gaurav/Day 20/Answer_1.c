#include<stdio.h>

int remDigit(int y){
    int m=0;
    while(y!=0){
        int rem;
        rem=y%10;
        m=m*10+rem;
        y=y/10;
    }
    return m;
}

int cntDigit(int n){
    int temp, x=0, y=0;
    temp=n;
    while(temp!=0){
        x=x+temp%10;
        temp=temp/10;
        
        if(x!=temp%10){
           y=y*10+x;
        }
        x=x-x;
    }
    return remDigit(y);
}

int main(){
    int n, a[n];
    printf("Enter the number of element in the stack : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
       printf("The element after removing repeating digits is : %d",cntDigit(a[i])); 
       printf("\n");
    }
    return 0;
}
