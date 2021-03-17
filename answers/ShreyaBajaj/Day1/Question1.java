import java.util.*;
class series
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		System.out.println("Enter the number");
		int n=ob.nextInt();
		int s=0,i;
		for(int i=1;i<=n;i++)
		{
			s=((int) Math.pow(i,3))+(i*2);
			System.out.print(s+",");
		}
	}
}
