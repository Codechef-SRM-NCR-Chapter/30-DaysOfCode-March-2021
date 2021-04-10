#include<stdio.h>
void reverse(char *a,char*b){
    char temp;
    while(a<b){
        temp = *a;
        *a++ = *b;
        *b-- = temp;
    }
}
void reversewords(char *s){
    char *word_begin=s;
    char *temp = s;
    while(*temp){
        temp++;
        if(*temp=='\0'){
            reverse(word_begin,temp-1);
        }
        else if(*temp==' '){
            reverse(word_begin,temp-1);
            word_begin=temp+1;
        }
    }
    reverse(s,temp-1);
}
int main(){
    char string[1000];
    printf("enter the sentence: ");
    gets(string);
    reversewords(string);
    printf("\nreversed sentence is: ");
    printf("%s",string);
    return 0;
}
