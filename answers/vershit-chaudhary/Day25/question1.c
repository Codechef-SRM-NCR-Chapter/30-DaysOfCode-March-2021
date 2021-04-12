#include<stdio.h>
int main(){
    int n;
    printf("enter the number of moves: ");
    scanf("%d",&n);
    int x=0,y=0;
    for(int i=0;i<=n;i++){
        if(n%2==0){
            if(i!=1 || i%2==0){
                y=y+1;
            }
        }
        if(n%2!=0){
            if(i==1 || i%2==1){
                y=y+i;
            }
        }
    }
    printf("absolute sum of all reachable destinations is %d ",y*2);
    return 0;
}
