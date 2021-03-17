import java.util.*;
public class Ques1
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Limit  for the series:");
        int s=sc.nextInt();
        int i,n=2;
        for(i=1;i<=s;i++)
        {
            System.out.print(((int)Math.pow(i,3)+n)+",");
            n=n+2;
        }
    }
}
        
        
