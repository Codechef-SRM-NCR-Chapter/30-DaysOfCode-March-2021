#include<stdio.h>
void printQuadruple(int arr[], int size, int key)
{
    int i;
    for(i=0;i<size-3;i++)
    {
        if(arr[i]+arr[i+1]+arr[i+2]+arr[i+3]==key)
        {
            printf("{%d, %d, %d, %d}",arr[i],arr[i+1],arr[i+2],arr[i+3]);
        }
    }
}

int main(){
    int N,K;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("enter K: ");
    scanf("%d",&K);
    int array[N];
    for(int i=0;i<N;i++){
        printf("enter element number %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printQuadruple(array,N,K);
    return 0;
}
