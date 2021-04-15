import java.util.*;
class sum_number
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no.of test cases");
		int t=sc.nextInt();
		for(int j=0;j<t;j++)
		{
			System.out.println("Enter n");
		    int n=sc.nextInt();
		    check(n);
		}
	}
	static void check(int n)
	{
		if(n==2020+2020||n==2021+2021||n==2020+2021)
		System.out.println("YES");
		else
		System.out.println("NO");
	}
}
