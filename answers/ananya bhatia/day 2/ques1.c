#include <stdio.h>

int
main ()
{
  int n, reverse, r, orignal;
  int x, flag;
  flag = 0;
  scanf ("%d", &n);
  reverse = 0;
  orignal = n;
  while (n > 0)
    {
      r = n % 10;
      reverse = reverse * 10 + r;
      n /= 10;

    }



  for (x = 2; x < orignal; x++)
    {

      if (orignal % x == 0)
	{
	  flag = 1;

	}
}

      for (x = 2; x < reverse; x++)
	{

	  if (reverse % x == 0)
	    {
	      flag = 1;

	    }
	}

      switch (flag)
	{
	case 1:
	  printf ("false");
	  break;
	case 0:
	  printf ("true");
	  break;
	}
return 0;
 }
