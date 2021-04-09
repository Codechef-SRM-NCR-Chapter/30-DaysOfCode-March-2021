#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() 
{
    char str[100];
    int flag=0,arr[26],j;
    
    cout<<"Enter string";
    gets(str);
    for(j=0;str[j]!='\0';j++)
    {
        arr[j]=0;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
            arr[str[i]-'A']++;
            else
            arr[str[i]-'a']++;
        }
    }
    for(j=0;j<26;j++)
    {
        if(arr[j]==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    cout<<"\nPangram exists";
    else
    cout<<"\nPangram doesn't exists";
    return 0;
}
