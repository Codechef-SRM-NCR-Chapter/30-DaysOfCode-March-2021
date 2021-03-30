import java.util.Scanner;
public class Recursion {
    public static int findSum(int n)
    {
        if(n==0)
            return 0;

        return ((n%10)+findSum(n/10));
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=sc.nextInt();
        System.out.println("Sum = "+findSum(n));
    }

}
