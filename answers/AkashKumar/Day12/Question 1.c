#include <stdio.h>
void swap(char *x, char *y)
{

char temp;

temp=*x;
*x=*y;

}
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
  
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}
void main() 
{
   
   int i, n,m;
   char str[100], sstr[100];
   char constant = {'X'};
   printf("Enter no of Characters and no of modulation");
   scanf("%d%d",&n,&m);
   printf("Input the string : ");
   scanf("%s",str);
for(i=0;i<m;i++)
{
    printf("Enter constant term \n");
    int a;
    scanf("%d",&a);
    while(a==1)
    {
       int k;
       printf("Enter value of k: ");
       scanf("%d",&k);
      swap(&str[k-1],&constant);
    //   printf("%s\n",str);
      break;
    }
    while(a==2)
    {
    int l,pos,b;
    int c=0;
    printf("enter a and b :- \n");
    scanf("%d%d",&pos,&b);
    // printf("%d %d \n",pos,b);
    l=b-pos+1;
    // printf("%s\n",str);
  while(c<l) 
  {
      sstr[c] = str[pos+c-1];
      c++;
  }
  sstr[c]='\0';
 
//   printf("The substring retrieve from the string is : %s \n", sstr);
  isPalindrome(sstr);
  break;
    }
}
}
