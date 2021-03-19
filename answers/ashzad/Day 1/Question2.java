import java.util.*;
public class PATQues2
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Limit  for the pattern:");
        int s=sc.nextInt();
        int i,j;
        for(i=1;i<=s;i++)
        {
            for(j=s;j>=1;j--)
            {
                if(j<=i)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
        
        
