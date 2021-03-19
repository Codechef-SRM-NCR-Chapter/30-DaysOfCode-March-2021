import java.util.*;
public class Emirp
{
    public boolean isPrime(int n)
    {
        int i,c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c==2)
            return true;
        else
            return false;
    }

    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        Emirp ob=new Emirp();
        System.out.println("Enter the Number:");
        int s=sc.nextInt();
        int cp=s;
        int i,d,rev=0;
        while(s!=0)
        {
            d=s%10;
            s=s/10;
            rev=rev*10+d;
        }
        if(ob.isPrime(cp) && ob.isPrime(rev))
        System.out.println("The number is an Emirp Number:");
        else
        System.out.println("The number is not an Emirp Number:");
    }
}

        

