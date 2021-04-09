import java.util.*;
public class SubArray
{
    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int a[]=new int [n];
            for(int i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
            }
            int c=0;
            for(int s=0;s<n;s++)
                for(int e=s;e<n;e++)
                {
                    if(a[s]==1&&a[e]==1)
                        c++;
                }
            System.out.println(c);
        }
    }
}
