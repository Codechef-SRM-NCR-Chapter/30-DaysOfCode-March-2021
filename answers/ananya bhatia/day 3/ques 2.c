/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int
main ()
{
int flag = 1;


  printf ("enter number\n");

  char a[15];
  scanf ("%s", a);
  for (int i=0; a[i]!='\0';i++)
  {
       for (int j=(i+ 1); a[j]!='\0';j++)
       {
           if (a[i]==a[j])
           {
               flag = 0;
               break;
           }
       }
  }

if(flag == 0)
{
    printf ("not unique");
    
}
else { printf ("unique");}

    return 0;
}

