import java.util.*;
public class D26Q1
{
    public static boolean isPrime(int n)
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
        ArrayList<Integer> a1=new ArrayList<>();
        ArrayList<Integer> a2=new ArrayList<>();
        System.out.println("Enter the number of test cases:");
        int t=sc.nextInt();
        while(t-->0)
        {
            System.out.println("Enter the range:");
            int ll=sc.nextInt();
            int ul=sc.nextInt();
            for(int i=ll;i<=ul;i++)
            {
                if(isPrime(i)==true)
                    a1.add(i);
                else
                    a2.add(i);
            }
            int p=a1.size() * a2.size();
            System.out.println("Output : "+p);
        }
    }
}

