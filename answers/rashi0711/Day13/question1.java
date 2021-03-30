
import java.util.Scanner;

public class recursionsum {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		System.out.print(sum(n));
	}
	public static int sum(int n)
	{
		int s=0;
		if(n==0)
		{
			return s;
		}
		else
		{
			s=s+n%10+sum(n/10);
		}
		return s;
	}

}
