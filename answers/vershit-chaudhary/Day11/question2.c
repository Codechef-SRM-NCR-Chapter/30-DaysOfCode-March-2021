#include<stdio.h>
#include<string.h>
int check(char *string,char *patt){
    int m=strlen(patt);
    int n=strlen(string);
    int number=0;
    for(int i=0;i<n;i++){
         if(string[i]!=patt[0]){
                continue;
            }
        for(int j=0;j<m;j++){
           if(patt[j]==string[i+j]){
                number=number+1;
            }
            else{
                continue;
            }
        }
    }
     if(number==m){
         printf("yes");
     }
    return 0;
}
int main(){
    int n;
    char string[100];
    char patt[100]={0};
    printf("enter the string: ");
    scanf("%s",&string[100]);
    printf("\nenter the number of patterns: ");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
       printf("enter the patter string %d: ",i);
       scanf("%s",&patt[100]);
       check(string,patt);
   }
   return 0;
}
