import java.util.*;
class fibonacci
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int a=0,b=1;
		System.out.print(a+" ,"+b);
		for(int i=3;i<=50;i++)
		{
			int term=a+b;
			System.out.print(" ,"+term);
			a=b;
			b=term;
		}
	}
}
