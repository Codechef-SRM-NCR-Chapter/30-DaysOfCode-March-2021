import java.util.*;
class ques1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            if(i==n)
            System.out.println((int)(Math.pow(i,3)+(i*2)));
            else
            System.out.print((int)(Math.pow(i,3)+(i*2))+",");
        }
    }
}
