#include <stdio.h>
#include <math.h>



int
main ()
{
  int n, a, i, j;
  int b = 0;

  printf ("enter number n");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      a = 0;
      for (j = 1; j <= i; j++)
	{

	  a = a * 10 + j;

	}
      b = b + a;
    }
  printf ("%d\n", b);
}
