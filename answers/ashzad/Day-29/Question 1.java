import java.util.*;
public class ArraysRearrange
{
    public static void main(String[]args)
    {
        Scanner sc= new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n,x;
            n=sc.nextInt();
            x=sc.nextInt();
            int a[]=new int [n];
            int b[]=new int [n];
            for(int i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++)
            {
                b[i]=sc.nextInt();
            }
            int c=0;
            for(int i=0;i<n;i++)
            {
               if(a[i]+b[n-1-i] <= x)
               {
                   c++;
                }
            }
            if(c==n)
            System.out.println("Yes");
            else
            System.out.println("No");
        }
    }
}
