

#include <stdio.h>

int prime(int n)
{
	int i;
	if (n==1)
	{return 1;}
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}


int
main ()
{
  int n = 0;
  int x;
  for (int i = 1; i <= 4; i++)
    {


      for (int j = 1; j <= i; j++)
	{

	  n = n + 1;
	x=prime(n);
	if(x==0)
		printf("# ");
	else
		printf("* ");
	  
	}
      printf ("\n");
    }

  return 0;
}
