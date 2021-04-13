#include<stdio.h>
int main(){
    int x,y;
    int a=0,b=0;
    printf("enter the lower limit: ");
    scanf("%d",&x);
     printf("enter the upper limit: ");
    scanf("%d",&y);
    for(int i=x;i<=y;i++){
        if(i==2 || i==3 || i==5 ||i==7){
            a=a+1;
        }
        else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            a=a+1;
        }
        else if(i!=2 && i!=3 && i!=5 && i!=7 || i%2==0 || i%3==0 || i%5==0 || i%7==0){
            b=b+1;
        }
    }
    printf("total pairs can be: %d",a*b);
    return 0;
}
