public class pattern {

	public static void main(String[] args) {
		int i;int j;int c=1;
		for(i=1;i<=4;i++)
		{
		 for(j=1;j<=i;j++)
			{
				if(prime(c)==true)
				{
					System.out.print("# ");
				}
				else
				{
					System.out.print("* ");
					
				}
				c++;
			}
			System.out.println();
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
