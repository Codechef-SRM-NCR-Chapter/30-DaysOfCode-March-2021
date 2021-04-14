#include<stdio.h>
#include<string.h>
int main(){
    char st[1000];
    printf("enter the string: ");
    gets(st);
    int t,x=0;
    printf("enter the term: ");
    scanf("%d",&t);
    int l=strlen(st)-1;
    for(int i=l+1;i<1000;i++){
        st[i-1]=st[i-l];
    }
    for(int i=0;i<t;i++){
        if(st[i]=='a'){
            x=x+1;
        }
    }
    printf("number of times 'a' appear in string for first %d letters is %d ",t,x);
    return 0;
}
