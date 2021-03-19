import java.lang.Math;
import java.util.*;
public class Question_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the limit : ");
        int n = sc.nextInt();
        int e = 0;
        for(int i = 1; i<n; i++)
        {
            e=i*2;
            double p= Math.pow(i,3);
            System.out.print(p+e+",");
        }
        System.out.print(Math.pow(n,3)+(e+2)+".");
    }
}
