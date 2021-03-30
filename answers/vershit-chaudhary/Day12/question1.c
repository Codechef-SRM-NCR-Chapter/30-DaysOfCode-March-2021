#include<stdio.h>
#include<string.h>
int main(){
    int length,operations,a,b,k,y=0;
    printf("specify the length of string: ");
    scanf("%d",&length);
    printf("\nenter the number of operations: ");
    scanf("%d",&operations);
    printf("enter the string: ");
    char string[length];
    scanf("%s",string);
    printf("enter the value of 'a': ");
    scanf("%d",&a);
    printf("enter the value of 'b': ");
    scanf("%d",&b);
    for(int i=1;i<=operations/2;i++){
        for(int j=0;j<=(b-a)/2;j++){
            if(string[a+i]==string[b-i]){
                y=y+1;
            }
        }
        if(y==((b-a)/2)+1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        printf("enter the value of k: ");
        scanf("%d",&k);
        string[k+1]='x';
        y=y-y;
    }
}
