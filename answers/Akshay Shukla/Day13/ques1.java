import java.util.*;
class ques1d13
{
    public static int sum(int n)
    {
        if(n==0)
        return 0;
        else
        return (n%10)+sum(n/10);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number");
        int n=sc.nextInt();
        System.out.println(sum(n));
    }
}
