import java.util.Scanner;

public class emirp {

	public static void main(String[] args)
	{
		int n;
		System.out.println("Enter a number");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int t=n;int r=0;
		boolean f=prime(n);
		while(t!=0)
		{
			int b=t%10;
			{
				r=r*10+b;
			}
			t=t/10;
		}
		boolean l=prime(r);
		if(f==true&&l==true)
		{
			System.out.println("Emirp Number");
		}
		else
		{
			System.out.println("Not a Emirp Number");
		}
	}
		public static boolean prime(int n)
		{
			int i;int c=0;
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					c++;
				}
			}
			if(c==2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

	}


