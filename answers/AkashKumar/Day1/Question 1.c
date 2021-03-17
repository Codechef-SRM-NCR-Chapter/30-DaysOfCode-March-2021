#include<stdio.h>
int main() 
{
  int n;
  int i;
  int Sum;
  printf("Enter any number: \n");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    Sum= (i*i*i)+2*i;
    printf("%d, ", Sum);
  }
  
return 0;
}
  
