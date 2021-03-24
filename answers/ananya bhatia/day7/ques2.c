#include <stdio.h> 
#include <stdlib.h>

 int
main () 
{
  
int a, b, c, n, triple = 0;
  
 
printf (" size of the array: ");
  
scanf ("%d\n", &n);
  
 
 
int arr[n];
  
 
for (int k = 0; k < n; k++)
    
    {
      
printf ("Enter element no %d in the array: ", k + 1);
      
scanf ("%d", &arr[k]);
    
} 
 
printf ("\n Enter a: ");
  
scanf ("%d", &a);
  
printf ("\n Enter b: ");
  
scanf ("%d", &b);
  
printf ("\n Enter c: ");
  
scanf ("%d", &c);
  
 
for (int i = 0; i < n; i++)
    
    {
      
for (int j = 0; j < i; j++)
	
	{
	  
for (int x = 0; x < j; x++)
	    
	    {
	      
if (abs (arr[i] - arr[j] <= a) && abs (arr[j] - arr[x] <= b)
		   && abs (arr[i] - arr[x] <= c))
		
		{
		  
triple++;
		  
printf ("[%d, %d, %d] \n", arr[x], arr[j], arr[i]);
		
}
	    
}
	
}
    
}
  
printf ("\n number of good triplets are: %d \n", triple);

}
