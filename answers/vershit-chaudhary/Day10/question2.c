#include<stdio.h>
void main(){
char s[100];
int i,x=0;
printf("enter the sentence : ");
gets(s);
for(i=0;s[i]!='\0';i++){
    if(i==0){
        printf("\n%c",s[i]);
        x=x+1;
    }
   else if(s[i]>='A' && s[i]<='Z'){
        printf("\n%c",s[i]);
        x=x+1;
    }
    else{
        printf("%c",s[i]);
    }
}
printf("\n%d",x);
}
