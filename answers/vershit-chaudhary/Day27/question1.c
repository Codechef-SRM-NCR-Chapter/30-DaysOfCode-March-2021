#include<stdio.h>
int main(){
    int first[3];
    int x=0;
    printf("enter first line: ");
    for(int i=0;i<3;i++){
        scanf("%d",&first[i]);
    }
    int arr[first[0]];
    printf("eenter array: ");
     for(int i=0;i<first[0];i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<first[1];i++){
        int y=arr[first[0]-1];
        for(int j=first[0]-1;j>0;j--){
            x=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=x;
        }
        arr[0]=y;
        }
        int out[first[2]];
        printf("enter the indexes : ");
        for(int i=0;i<first[2];i++){
            scanf("%d",&out[i]);
        }
        printf("\n output is....\n");
         for(int i=0;i<first[2];i++){
            printf("%d\n",arr[out[i]]);
        }

    return 0;
}
