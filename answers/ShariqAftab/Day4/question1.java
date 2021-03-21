import java.util.*;
public class PrimeFact
{
    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        int n=sc.nextInt();
        int i=2;
        while(n!=0)
        {
            if(!isPrime(i))
            {
                i++;
                continue;
            }
            else if(n%i==0)
            {
                System.out.print(i+",");
                n/=i;
                continue;
            }
            else
                i++;
        }
    }

    public static boolean isPrime(int a)
    {
        if(a==1)
            return false;
        for(int i=2;i<=a/2;i++)
            if(a%i==0)
                return false;
        return true;
    }
}
