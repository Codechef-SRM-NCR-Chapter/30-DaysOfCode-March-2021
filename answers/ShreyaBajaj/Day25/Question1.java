import java.util.*;
class calc_reachablepositions
{
    public static void main(String args[])
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of test cases");
		int T=sc.nextInt();
        int X=0;
        for(int i=0;i<T;i++)
        {
			System.out.println("Enter n moves");
			int n = sc.nextInt();
			int sum=0;
			sum=sum+2*(Math.abs(X+n));
			sum=sum+Math.abs(X);
            System.out.println("No. of steps required is " + sum);
        }
	}
}
