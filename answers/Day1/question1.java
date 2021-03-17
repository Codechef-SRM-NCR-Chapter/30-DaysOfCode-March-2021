import java.util.*;
class question1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the value of n");
        int n=sc.nextInt();
        for (int i=1;i<=n;i++)
        { 
            System.out.print(Math.pow(i,3)+ i*2 +",");
        }
    }
}
            