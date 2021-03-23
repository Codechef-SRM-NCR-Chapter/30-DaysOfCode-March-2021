import java.util.*;
public class Bakvas
{
    public static void main()
    {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int s=0;
        int p=0;
        for(int i=1;i<=n;i++)
        { 
            p=p*10+i;
            s=s+p;
        }
        System.out.println(s);
    }
}
