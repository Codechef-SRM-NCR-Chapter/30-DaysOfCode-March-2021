import java.util.*;
public class unique {
    public static void main(String args[])
    {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter any number which you wanna check");
     int n=sc.nextInt();
     String s=String.valueOf(n);
     int x,y,z=0;
     for(x=0;x<s.length();x++)
     {
      char ch=s.charAt(x);
      for(y=x+1;y<s.length();y++)
      {
          char ch1=s.charAt(y);
         if(ch1==ch)
         {
            z=1;
             break;
         }
         if(z==1)
         break;
       }
     }
     if(z==1)
     System.out.println(s+" is not an unique number"); 
     if(z==0)
     System.out.println(s+" is an unique number");
    }
}
