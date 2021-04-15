import java.util.*;
class shaurya
{
    public static boolean check(int n)
    {
        if(n%2020==0)
        return true;
        if(n%2021==0)
        return true;
        else
        {
            int q=n/2020;
            int temp=2020*(q-1);
            for(int x=1;x<=9;x++)
            if((temp + 2021*x)==n)
            return true;
        }
        return false;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int testcase=sc.nextInt();
        int c=0;
        while(c<testcase)
        {
            int n=sc.nextInt();
            System.out.println(check(n)?"YES":"NO");
            c++;
        }
    }
}
