#include<stdio.h>
int main(){
    int n,x,sum=0;
    printf(" total number of elements in array: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        printf(" element no. %d : ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(num[i]>num[j]){
               x=num[i];
               num[i]=num[j];
               num[j]=x;
           }
        }

    }
    for(int i=0;i<n;i+=2){
        sum+=num[i];
    }
    printf("\nmaximum  %d",sum);
    return 0;
}
