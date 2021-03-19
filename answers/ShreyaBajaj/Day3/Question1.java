import java.util.*;
class series
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n,s=0,d=1,i;
		System.out.println("Enter number of terms");
		n=sc.nextInt();
		for(i=1;i<=n;)
		{
			System.out.print(d+" + ");
			s=s+d;
			i++;
			d=(d*10)+i;
		}
		System.out.println();
		System.out.println("sum is "+s);
	}
}
