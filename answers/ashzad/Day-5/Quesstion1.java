public class Fibonacci {
	public static void main(String[]args)
	{
		//Scanner sc=new Scanner(System.in);
		int a=0;
		int b=1;
		int c;
		for(int i=1;i<=50;i++)
		{
			System.out.print(a+",");
			c=a+b;
			a=b;
			b=c;
		}
		
	}

}
