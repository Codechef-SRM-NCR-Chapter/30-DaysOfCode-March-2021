import java.util.*;
public class series
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int i=1;
        while(i<=n)
        {
            int a=(i*i*i) + (2*i);
            System.out.print(a+",");
            i++;
        }
    }
}
