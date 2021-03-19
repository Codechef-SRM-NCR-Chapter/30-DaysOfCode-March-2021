#include<stdio.h>
int main()
{
  int x,c=0,a,b,d;
  printf("Enter the number:");
  scanf("%d",&x);
  while(x)
  {
  	a=x%10;
  	x=x/10;
  	d=x;
  	while(d)
  	{
  		b=d%10;
  		d=d/10;
  		if(a==b)
  			c++;
  	}

  }
  if(c)
  	printf("not unique");
  else
  	printf("unique");
  }
