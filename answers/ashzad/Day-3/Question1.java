import java.util.*;
public class SumSeries {
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the limit of the series:");
		int n=sc.nextInt();
		int i,j,sum=0;
		for(i=1;i<=n;i++)
		{
			String st="";
			for(j=1;j<=i;j++)
			{
				st=st+j;
				
			}
			sum=sum+Integer.parseInt(st);
			//System.out.println(sum);
			//System.out.println(st);
		}
		System.out.println("Sum of the given Series= "+sum );
	}

}
