#include<stdio.h>
#include<string.h>
void main(){
    char string[100];
    int i,n,a=0;
    printf("enter the string but don't use spaces: ");
    gets(string);
    int x=strlen(string);
    if(x%2==0){
         n=x/2;
    }
    else{
        n=(x-1)/2;
    }
    for(i=0;i<x;i++){
        if(string[i]==1){
            continue;
        }
        for(int j=i+1;j<=x;j++){
            if(string[i]==string[j]){
                a=a+1;
                string[j]==1;
            }
        }
    }
    if(a==n){
        printf("YES");
    }
    else(printf("NO"));
}
