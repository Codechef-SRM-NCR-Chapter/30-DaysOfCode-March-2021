import java.util.*;
public class PATD5 {
   public staic Boolean isPrime(int n)
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
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the limit:");
        int n=sc.nextInt();
        int i,j,k=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                
                if(isPrime(k)== true)
                    System.out.print(" # ");
                else
                    System.out.print(" * ");
                    k++;
            }
            System.out.println();
        }

    }

}
