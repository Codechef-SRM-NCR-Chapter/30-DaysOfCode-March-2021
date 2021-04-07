#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    printf("enter the string: ");
    gets(s);
    int l=strlen(s);
    char reverse[l];
    for(int i=0;i<l;i++){
        for(int j=l-(i+1);j>=l-(i+1);j--){
            reverse[i]=s[j];
        }
    }
    printf("reversed string is: ");
    for(int i=0;i<l;i++){
        printf("%c",reverse[i]);
    }
}
