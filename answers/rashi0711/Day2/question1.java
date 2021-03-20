import java.util.Scanner;

public class disarium {

	public static void main(String[] args) {
		int n;
		System.out.println("Enter a Number");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int t=n;int c=0;int s=n;int g=0;
		while(t!=0)
		{
			int b=t%10;
			c++;
			t=t/10;
		}
		while(s!=0)
		{
			int b=s%10;
			{
				int pow=(int)Math.pow(b,c);
				g=g+pow;
			}
			s=s/10;
			c--;
			
		}
		if(g==n)
		{
			System.out.println("Disarium Number");
		}
		else
		{
			System.out.println("Not a disarium number");
		}

	}

}
