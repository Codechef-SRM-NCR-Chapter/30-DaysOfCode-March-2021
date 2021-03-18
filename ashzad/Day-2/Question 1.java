import java.util.*;
public class Disarium
{
    public int count(int n)
    {
        int c=0;
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        return c;
    }

        public static void main(String[]args)
        {
        Scanner sc=new Scanner(System.in);
        Disarium ob=new Disarium();
        System.out.println("Enter the Number:");
        int s=sc.nextInt();
        int cp=s;
        int c=ob.count(s);
        int i,d,sum=0;
        while(s!=0)
        {
            d=s%10;
            s=s/10;
            sum=sum+(int)Math.pow(d,c);
            c--;
        }
        if(sum==cp)
            System.out.println("The number is a Disarium Number:");
        else
            System.out.println("The number is not a Disarium Number:");
    }
}


