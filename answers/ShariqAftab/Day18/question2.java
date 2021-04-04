import java .util.*;
public class PSquares
{
    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        int n=sc.nextInt();
        int c=0;
        for(int i=1;i<n/2;i++)
        {
            if(i*i<n)
                c++;
        }
        System.out.println(c);
    }
}
