import java.util.Scanner;

 public class Day4q1 {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("ENTER THE NUMBER ");
		int num=sc.nextInt();
		int i=2;
		while(num!=1)
		{

			if((check(i)==true)&&(num%i==0))
			{
				System.out.print(i+" ");
				num=num/i;
			}
			else
			{
				i++;
			}
		}


	}
	public static boolean check(int n)
	{
		int i;int count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0){
			
				count++;
			}
		}
		if(count==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}
