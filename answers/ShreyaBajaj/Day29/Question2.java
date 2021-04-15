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
		while(n>=2020)
		{
			if(n%2020==0)
			n=0;
			if(n%2021==0)
			n=0;
			else
			{
				if(n>=2020)
				n-=2020;
				if(n>=2021)
				n-=2021;
			}
		}
		if(n==0)
		System.out.println("YES");
		else
		System.out.println("NO");
	}
}
