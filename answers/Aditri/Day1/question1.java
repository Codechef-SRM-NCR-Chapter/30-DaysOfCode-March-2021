import java.util.*;
class ques1d1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of terms");
        int n=sc.nextInt();
        int i,x=0;
        for(i=1;i<=n;i++)
        {
            x=i*2+(int) Math.pow(i,3);
            System.out.println(x);
        }
    }
}
