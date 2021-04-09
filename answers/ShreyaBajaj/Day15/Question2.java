import java.util.*;
class matrix_recursive
{
    static int count(int m,int n)
    {
        if(m==1 || n==1)
        return 1;
        return count(m,n-1)+count(m-1,n);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter m");
        int m=sc.nextInt();
        System.out.println("Enter n");
        int n=sc.nextInt();
        System.out.println("output: "+count(m,n));
    }
}
