#include<stdio.h>
#include<string.h>
int main(){
   char l1[100],l2[100],s[1000];
   int t,w;
   printf("enter the number of words in sentence: ");
   scanf("%d",&w);
   printf("enter words in languages");
   scanf("%d",&t);
   printf("enter words of first language: ");
   for(int i=0;i<t;i++){
       scanf("%c",&l1[i]);
   }
    printf("enter words of second language: ");
   for(int i=0;i<t;i++){
       scanf("%c",&l2[i]);
   }
   printf("enter the sentence: ");
   for(int i=0;i<w;i++){
       scanf("%c",&s[i]);
   }
    for(int i=0;i<w;i++){
        for(int j=0;j<t;j++){
            if(s[i]==l1[j] || s[i]==l2[j]){
                if(strlen(l1[i])<strlen(l2[i])){
                    s[i]==l1[j];
                }
                else{
                    s[i]==l2[j];
                }
            }
        }
    }
    printf("converted string is: ");
    for(int i=0;i<w;i++){
        printf("%c ",s[i]);
    }
    return 0;
}
