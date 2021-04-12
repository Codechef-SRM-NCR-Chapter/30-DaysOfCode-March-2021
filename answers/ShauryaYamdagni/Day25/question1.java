import java.util.*;
class shaurya {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        while(n>0) 
        {
            int sum=0;
            int x = sc.nextInt();
            for(int y=0;y<=x;y++)
            sum=sum+y;
            System.out.println((2*sum));
            n--;
        }
    }
}
