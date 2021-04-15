import java.util.*;
public class Special_Sum_Year
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            boolean flag=false;
            int n=sc.nextInt();
            while(n>0)
            {
                if(n%2020==0)
                    n=n-2020;
                else
                    n=n-2021;
                if(n==0)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true)
            System.out.println("YES");
            else
            System.out.println("N0");
        }
    }
}


