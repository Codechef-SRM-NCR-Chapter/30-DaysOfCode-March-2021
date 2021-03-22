#include<stdio.h>
int main(){
    int candies[5]={2,3,5,1,3};
    int extracandies;
    int x=0;
    printf("enter the number of extra candies:\n");
    scanf("%d",&extracandies);
    printf("{ ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if((candies[i]+extracandies)>=candies[j]){
                x=x+1;
            }
            else{
                x=x;
            }
        }
         if(x==5){
                printf("true, ");
            }
            else{
                printf("false, ");
            }
            x=0;
    }
    printf("}");
    return 0;
}
