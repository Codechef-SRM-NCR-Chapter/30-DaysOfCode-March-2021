import java.util.*;
public class Disarium
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int s=0;
        int c=n;
        String ns=""+n;
        int f=ns.length();
        while(n!=0)
        {
            s=s+(int)(Math.pow((n%10),f--));
            n/=10;
        }
        if(s==c)
         System.out.println("Yes it is Disarium Number");
        else
         System.out.println("Not a Disarium Number");
    }
}
