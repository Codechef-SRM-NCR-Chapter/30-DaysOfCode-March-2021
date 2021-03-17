#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr(); //To clear the output screen
  int n,k=2;
  printf("ENTER A NUMBER\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    int s=pow(i,3)+k;
    printf("%d  ",s);
    k+=2;
  }
  getch();
}


    
  
