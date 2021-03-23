#include <stdio.h>
int
main ()
{
  
int i, n, first = 0, second = 1, next;
  
printf ("Enter the number of terms: ");
  
scanf ("%d", &n);
  
 
for (i = 1; i <= n; ++i)
    {
      
printf ("%d, ", first);
      
next= first + second;
      
first = second;
      
second = next;
    
}
  
 
return 0;

}
