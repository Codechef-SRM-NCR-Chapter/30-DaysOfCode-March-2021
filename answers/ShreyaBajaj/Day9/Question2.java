import java.util.*;
class sumsubarray
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner (System.in);
		int n,sum=0,sum2=0;
		System.out.println("Enter no.of terms");
		n=sc.nextInt();
		int a[]=new int[n];
		System.out.println("Enter terms");
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				sum=sum+a[j];
				if(sum>sum2)
				sum2=sum;
			}
			sum=0;
		}
		System.out.println("max sum is "+sum2);
	}
}
