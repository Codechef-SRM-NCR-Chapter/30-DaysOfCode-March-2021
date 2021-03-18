import java.util.*;
public class Emirp
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int rev=reverse(n);
        if(isPrime(n)==true&&isPrime(rev)==true)
            System.out.println("Number is Emirp");
        else
        System.out.println("Number is not Emirp");
    }
    public static int reverse(int a)
    {
        int rev=0;
        while(a!=0)
        {
            rev=rev*10+(a%10);
            a/=10;
        }
        return rev;
    }
    public static boolean isPrime(int n)
    {
        if(n==1||n==0)
            return false;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
}
