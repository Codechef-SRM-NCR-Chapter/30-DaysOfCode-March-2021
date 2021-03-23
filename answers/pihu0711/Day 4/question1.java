import java.util.Scanner;

public class primefactors {

	public static void main(String[] args) {
		int number;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number: ");
		number=sc.nextInt();int i=2;
		while(number!=1)
		{
			
			if((prime(i)==true)&&(number%i==0))
			{
				System.out.print(i+" ");
				number=number/i;
			}
			else
			{
				i++;
			}
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
