#include <stdio.h>
#include<math.h>
int
main ()
{
  int flag = 1;
int sum=0;
int num=0;


  printf ("enter number\n");

  char a[15];
  scanf ("%s", a);
  
  for (int i = 0; a[i] != '\0'; i++)
    {
   sum=sum+pow(a[i]-'0',(i+1));
   num=num*10+(a[i]-'0');
   
    }

  if (num==sum)
  { flag = 0;}



  if (flag == 0)
    {
      printf ("true");

    }
  else
    {
      printf ("false");
    }

  return 0;
}
