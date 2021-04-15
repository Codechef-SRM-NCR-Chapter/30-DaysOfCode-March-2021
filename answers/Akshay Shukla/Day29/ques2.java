import java.util.*;
class ques2d29
{
    static boolean check(int n)
    {
        if(n==0)
        return true;
        if(n<0)
        return false;
        boolean r2020=check(n-2020);
        boolean r2021=check(n-2021);
        return r2020|r2021;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT :");
        int t=sc.nextInt();
        int a[]=new int[t];
        for(int i=0;i<t;i++)
        a[i]=sc.nextInt();
        System.out.println("OUTPUT :");
        for(int i=0;i<t;i++)
        {
            if(check(a[i]))
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}
