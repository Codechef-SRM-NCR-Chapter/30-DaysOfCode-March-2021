#include<stdio.h>
void main(){
    char s[100];
    int i,alphabet=0,used[26]={0};
    printf("Enter the sentence : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if('a'<=s[i] && s[i]<='z'){
            alphabet=alphabet+!used[s[i]-'a'];
            used[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z'){
            alphabet=alphabet+!used[s[i]-'A'];
            used[s[i]-'A']=1;
        }
    }
    printf("\n");
    if(alphabet==26){
        printf("PANAGRAM EXISTS");
    }
    else{
         printf("PANAGRAM DOESN'T EXISTS");
    }
}
