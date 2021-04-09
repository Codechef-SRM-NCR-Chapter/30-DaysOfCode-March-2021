#include<stdio.h>
#include<math.h>
int main(){
    int l,a,x,y=0;
    printf("enter the length of array: ");
    scanf("%d",&l);
    int arr[l];
    printf("enter the elements of array one by one: ");
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    if(l%2==0){
        x=l/2-1;
    }
    else{
        x=l/2;
    }
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
        if(arr[i]>arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
        }
    }
    for(int i=0;i<l;i++){
        if(i%2==0 && i!=1){
            y=y+arr[i]*pow(10,x-i/2);
        }
         else if(i==1){
            y=y+arr[1]*pow(10,l/2-1);
        }
        else if(i%2!=0 && i!=1){
            y=y+arr[i]*pow(10,l/2-1-(i-1)/2);
        }
    }
    printf("%d",y);
    return 0;
}
