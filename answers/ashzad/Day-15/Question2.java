import java.util.*;

class CountPath {
    static int count(int m, int n)
    {
        if (m == 1 || n == 1)
            return 1;
        return count(m - 1, n) + count(m, n - 1);
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of m and n:");
        int m=sc.nextInt();
        int n=sc.nextInt();
        System.out.println("The total number of paths are: "+count(m,n));
    }
}
