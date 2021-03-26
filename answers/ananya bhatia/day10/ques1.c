#include<stdio.h>
#include <string.h>

 
char main()
{
    char x[100];
    int i,
    string[26]={0},
    total=0;
   
   
     
    printf("\n Enter the String:");
    gets(x);
     
    for(i=0;x[i]!='\0';i++)
    {
        if('a'<=x[i] && x[i]<='z')
        {
            total+=!string[x[i]-'a'];
            string[x[i]-'a']=1;
        }
        else if('A'<=x[i] && x[i]<='Z')
        {
            total+=!string[x[i]-'A'];
            string[x[i]-'A']=1;
        }
    }
     
    if(total==26)
    {
        printf("\n Pangram String.");
    }
    else
    {
        printf("\n  Not a Pangram String.");
    }
    
}
