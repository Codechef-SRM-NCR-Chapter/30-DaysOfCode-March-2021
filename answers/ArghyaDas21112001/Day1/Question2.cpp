#include<stdio.h>
int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j <= n-i; j++)
      printf(" "); // space 
      for(int k=1; k <= i; k++)
      printf("*"); // star

      printf("\n"); // new line
    }

    return 0;
}
