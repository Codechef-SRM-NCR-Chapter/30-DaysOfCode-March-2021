import java.util.*;
class Day1q1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of term");
        int n=sc.nextInt();
        int j;
        int series=0;
        for(j=1;j<=n;j++)
        {
            series =j*2+(int) Math.pow(j,3);
            System.out.println(series);
        }
    }
}
