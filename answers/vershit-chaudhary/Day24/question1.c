#include<stdio.h>
#include<string.h>
void swap(char *x,char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void arrange(char *a,int l,int r){
    int i;
    if(l==r){
        printf("%s\n",a);
    }
    else{
        for(int i=l;i<=r;i++){
            swap((a+l),(a+i));
            arrange(a,l+1,r);
            swap((a+l),(a+i));
        }
    }
}
int main(){
    char s[26];
    printf("enter the string: ");
    gets(s);
    int x=strlen(s);
    arrange(s,0,x-1);
    return 0;
}
