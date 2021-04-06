#include<stdio.h>
#include<string.h>
int main(){
    char exp[100];
    int x=0;
    printf("enter the expression string: ");
    gets(exp);
    int l=strlen(exp);
    if(exp[0]!='[' && exp[0]!='{' && exp[0]!='('){
        printf("FALSE");
    }
    else if(l%2!=0){
        printf("FALSE");
    }
    else if(exp[l-1]!=']' && exp[l-1]!='}'&& exp[l-1]!=')'){
        printf("FALSE");
    }
    for(int i=0;i<l;i++){
        if(exp[i]!='[' && exp[i]!='{'&& exp[i]!='('){
            continue;
        }
        for(int j=i+1;j<l;j++){
            if(exp[i]=='{' && exp[j]=='}'){
                if((j-i)%2==1 || j-i==1){
                    x=x+1;
                  break;  
                }
            }
            else if(exp[i]=='[' && exp[j]==']'){
                if((j-i)%2==1 || j-i==1){
                    x=x+1;
                  break;  
                }
             }
             else if(exp[i]=='(' && exp[j]==')'){
                if((j-i)%2==1 || j-i==1){
                    x=x+1;
                   break; 
                }
            }
            continue;
        }
    }
    if(x==l/2){
        printf("\nTRUE");
    }
    else{
        printf("\nFALSE");
    }
    return 0;
}
