#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr(); //To clear the output screen
  for(int i=1;i<5;i++)
  {
    for(int s=3;s>=i;s--)
    {
      printf(" ");
    }
    for(int m=1;m<=i;m++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
}
