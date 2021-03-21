import java.util.*;
public class Fabonaci
{ 
    public static void main(String args[])
    {
         Scanner sc =new Scanner(System.in);
        System.out.print("Enter the last term ");
         int n= sc.nextInt();
         int a=0;
         int b=1;
         int series =0;
   for(int i=0;i<n;i++){
       System.out.print(a+" ");
       
       series =(a+b);
    
   
     a=b;
     b=series;
    }
}
}
    
