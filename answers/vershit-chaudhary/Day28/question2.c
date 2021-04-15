#include<stdio.h>
int main(){
    int l,y=0;
    printf("enter the length of array: ");
    scanf("%d",&l);
    int a[l];
    printf("enter the elements one by one: ");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    int x=a[l-1];
    for(int i=l-1;i>0;i--){
        y=a[i];
        a[i]=a[i-1];
        a[i-1]=y;
        if(i==(l/2)+1){
            break;
        }
    }
   // a[l/2]=x;
    for(int i=0;i<l;i++){
        printf("%d, ",a[i]);
    }
    return 0;
}
