#include<stdio.h>
int main(){
    int n,x=0,freq[100],count;
    printf("enter the total number of elements in num array: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        printf("enter the element no. %d : ",i+1);
        scanf("%d",&num[i]);
        freq[i]=-1; 
    }
    printf("entered array is\n[ ");
     for(int i=0;i<n;i++){
        printf("%d, ",num[i]); 
    }
    printf("]");
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(num[i]==num[j]){
                count++;
                freq[j]=0;
            }
        }
    if(freq[i]!=0){
        freq[i]=count;
    }
    }
    printf("\nunique elements are; [");
    for(int i=0;i<n;i++){
        if(freq[i]==1){
        printf("%d, ",num[i]);
        }
        else{
            continue;
        }
    }
    printf("] and there sum is ");
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            x=x+num[i];
        }
        else{
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
