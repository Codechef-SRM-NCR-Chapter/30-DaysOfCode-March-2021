#include <stdio.h>
#include<string.h>
int num(char *str, char *substr, int n, int k)
{
    int res=0,i,j;
    for(i=0;i<=n-k;i++)
    {
        for(j=0;j<k;j++)
        if(str[i+j]!=substr[j])
        break;
        if(j==k)
        {
            res++;
            j=0;
        }
    }
    return res;
}
int main()
{
    char str[100];
    int m, n,k,i,j;
    printf("Enter a String: ");
    gets(str);
    n=strlen(str);
    printf("Enter no of Substring: ");
    scanf("%d",&k);
    char substr[k][100];
    int a[k];
    for(j=0;j<k;j++)
    { 
      printf("Enter subscript no. %d  ", j+1);
      scanf("%s",substr[j]);
      a[j]=strlen(substr[j]);

      printf("%d\n", num(str, substr[j],n,a[j]));
    }
    return 0;
}
