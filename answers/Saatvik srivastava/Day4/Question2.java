import java.util.*;
class Pattern
{
 
    public static void main(String ars[]) 
    { 
        
       int n =5;
        int i, j;
        int num=1;
        for(i=1; i<n; i++) 
        { 
        for(j=1;j<=i;j++)  
            {           
                System.out.print(num+" "); 
                num++;
            }
                
            System.out.println(); 
        } 
    } 
}
