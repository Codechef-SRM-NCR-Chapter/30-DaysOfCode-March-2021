import java.util.*;
public class SumDig
{
    public static void main()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the size of the Array");
        int n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter the elements");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println(sumDig(a,0));
    }
    public static int sumDig(int a[],int i)
    {
        if(i==a.length)
            return 0;
        return a[i]+sumDig(a,i+1);
    }
}
