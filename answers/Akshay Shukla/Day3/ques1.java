import java.util.*;
class ques1d3
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n");
        int n=sc.nextInt();
        int s=0,x=0;
        for(int i=1;i<=n;i++)
        {
            x=x*10+i;
            s=s+x;
        }
        System.out.println(s);
    }
}
