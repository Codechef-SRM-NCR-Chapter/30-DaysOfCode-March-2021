import java.util.*;
class shaurya
{
    public static boolean primecheck(int n)
    {
        // System.out.println("qwertyuiop");
        int count=0;
        int x;
        for(x=1;x<=n;x++)
        {
        if(n%x==0)
        count++;
        // System.out.println("aaaaaaasdfghjmnbvcxz");
        }
        if(count==2)
        return true;
        else
        return false;
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of test case");
        int n=sc.nextInt();
        int pc=0,cc=0;
        int y;
        for(y=0;y<n;y++)
        {
            int low=sc.nextInt();
            int high=sc.nextInt();
            for(int x=low;x<=high;x++)
            {
                if(primecheck(x))
                {
                pc++;
                }
                else
                {
                cc++;
                }
            }
            System.out.println(pc*cc);
            pc=0;cc=0;
        }
    }
}
