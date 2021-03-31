#include<stdio.h>
#include<string.h>
int duplicate(char *str){
    if(str[0]=='\0'){
        return 0;
    }
     if(str[0]==str[1]){
         int n=0;
         while(str[n]!='\0'){
             str[n]=str[n+1];
             n++;
         }
         duplicate(str);
     }
     duplicate(str+1);
}
int main(){
    char str[100];
    printf("enter the string: ");
    gets(str);
    puts(str);
    duplicate(str);
    puts(str);
    return 0;
}
